#include <iostream>
#include "Person.h"

Person::Person() {

}

Person::Person(std::string name, std::string surname, unsigned int age, unsigned int dni) : name(name),
                                                                                            surname(surname), age(age),
                                                                                            dni(dni) {

}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    this->name = name;
}

const std::string &Person::getSurname() const {
    return this->surname;
}

void Person::setSurname(const std::string &surname) {
    this->surname = surname;
}

unsigned int Person::getAge() const {
    return this->age;
}

void Person::setAge(unsigned int age) {
    this->age = age;
}

unsigned int Person::getDni() const {
    return this->dni;
}

void Person::setDni(unsigned int dni) {
    this->dni = dni;
}

std::ostream &operator<<(std::ostream &o, const Person &person) {
    return o << "Name: " << person.name << " | Surname: " << person.surname << " | Age: " << person.age << " | DNI: "
             << person.dni;
}
