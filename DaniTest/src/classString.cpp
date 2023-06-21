#include "classString.hpp"

String::String() {
    this->m_pointer = nullptr;
    this->m_size = 0;
}

String::String(const char *str) {
    this->m_size = strlen(str) + 1;
    this->m_pointer = new char[this->m_size];
    checkAllocate(this->m_pointer);
    strncpy(this->m_pointer, str, this->m_size);
}

String::String(const String& original) :
    m_size{original.m_size} {
        this->m_pointer = new char[this->m_size];
        checkAllocate(this->m_pointer);
        strncpy(this->m_pointer, original.m_pointer, this->m_size);
}

String::~String() {
    delete[] this->m_pointer;
}

String& String::operator=(const String& str) {
    if (this == &str) delete[] this->m_pointer;
    this->m_size = str.m_size;
    this->m_pointer = new char[this->m_size];
    checkAllocate(this->m_pointer);
    strncpy(this->m_pointer, str.m_pointer, this->m_size);
    return (*this);
}

String& String::operator=(const char *str) {
    this->m_size = strlen(str) + 1;
    this->m_pointer = new char[this->m_size];
    checkAllocate(this->m_pointer);
    strncpy(this->m_pointer, str, this->m_size);
    return (*this);
}

String& String::operator+=(const String& str) {
    // Similar to performing a realloc.
    char *aux = new char[this->m_size];
    checkAllocate(aux);
    strncpy(aux, this->m_pointer, this->m_size);
    delete[] this->m_pointer;

    this->m_size += str.m_size - 1;
    this->m_pointer = new char[this->m_size];
    checkAllocate(this->m_pointer);
    strncpy(this->m_pointer, aux, strlen(aux) + 1);
    strncat(this->m_pointer, str.m_pointer, str.m_size);
    delete[] aux;
    return (*this);
}

String& String::operator+=(const char *str) {
    // Similar to performing a realloc.
    char *aux = new char[this->m_size];
    checkAllocate(aux);
    strncpy(aux, this->m_pointer, this->m_size);
    delete[] this->m_pointer;

    this->m_size += strlen(str);
    this->m_pointer = new char[this->m_size];
    checkAllocate(this->m_pointer);
    strncpy(this->m_pointer, aux, strlen(aux) + 1);
    strncat(this->m_pointer, str, strlen(str) + 1);
    delete[] aux;
    return (*this);
}

String String::operator+(const String& str) {
    String aux;
    aux.m_size = this->m_size + str.m_size - 1;
    aux.m_pointer = new char[aux.m_size];
    checkAllocate(aux.m_pointer);
    strncpy(aux.m_pointer, this->m_pointer, this->m_size);
    strncat(aux.m_pointer, str.m_pointer, str.m_size);
    return aux;
}

String String::operator+(const char *str) {
    String aux;
    aux.m_size = this->m_size + strlen(str);
    aux.m_pointer = new char[aux.m_size];
    checkAllocate(aux.m_pointer);
    strncpy(aux.m_pointer, this->m_pointer, this->m_size);
    strncat(aux.m_pointer, str, strlen(str) + 1);
    return aux;
}

String operator+(const char *str_FST, const String& str_SND) {
    String aux;
    aux.m_size = strlen(str_FST) + str_SND.m_size;
    aux.m_pointer = new char[aux.m_size];
    checkAllocate(aux.m_pointer);
    strncpy(aux.m_pointer, str_FST, strlen(str_FST) + 1);
    strncat(aux.m_pointer, str_SND.m_pointer, str_SND.m_size);
    return aux;
}

ostream& operator<<(ostream& output, const String& str) {
    checkAllocate(str.m_pointer);
    output << str.m_pointer;
    return output;
}

istream& operator>>(istream& input, String& str) {
    char buffer[MAX_BUFFER_LENGTH];
    cout << "Insert string: ";
    // Consider not entering a string with spaces
    input >> buffer;
    str.m_size = strlen(buffer) + 1;
    if (str.m_size == MAX_BUFFER_LENGTH + 1) {
        cout << "ERROR: The entered string is too long" << endl;
        exit(EXIT_FAILURE);
    }
    if (str.m_pointer != nullptr) delete[] str.m_pointer;
    str.m_pointer = new char[str.m_size];
    checkAllocate(str.m_pointer);
    strncpy(str.m_pointer, buffer, str.m_size);
    input.ignore(); // Ignore any additional characters after reading the string
    input.clear(); // Restore the state of the input
    return input;
}
