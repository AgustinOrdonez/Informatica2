#include <cstring>
#include "String.h"

/** returns a new String with text concat, without modifying any of the originals */
String String::operator+(const String &str) {

    int newSize = this->tam + str.tam;
    char *newP = new char[newSize];
    for (int i = 0; i < this->tam; ++i) {
        newP[i] = this->p[i];
    }
    for (int i = this->tam; i < newSize; ++i) {
        newP[i] = str.p[i - this->tam];
    }

    return String(newP);
}

/**Appends to string, assuming incomming string is a C string, ended with 0*/
String String::operator+=(const char *str) {
    int oldTam = this->tam;

    this->tam += strlen(str);

    char *newStr = new char[this->tam];

    memcpy(newStr, this->p, oldTam);
    delete[]p;
    this->p = newStr;

    return *this;
}