#include "Person.h"
#include "Student.h"


Student::Student() {

}

Student::Student(const std::string &name, const std::string &surname, unsigned int age, unsigned int dni,
                 unsigned int docket, unsigned char carrer) : Person(name, surname, age, dni), docket{docket},
                                                              carrer{carrer} {

}

unsigned int Student::getDocket() const {
    return this->docket;
}

void Student::setDocket(unsigned int docket) {
    this->docket = docket;
}

unsigned char Student::getCarrer() const {
    return this->carrer;
}

void Student::setCarrer(unsigned char carrer) {
    this->carrer = carrer;
}

std::ostream &operator<<(std::ostream &o, const Student &student) {
    o << "Docket: " << student.docket << " | Carrer: " << student.carrer << " | " << (Person) student;
    return o;
}