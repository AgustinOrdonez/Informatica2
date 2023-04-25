#include <iostream>
#include "Student.h"

int main() {
    Student student("Name", "Surname", 1, 1, 1, 'a');
    Person person("PERSON", "SURPERSON", 1, 1);
//    std::cout << person;
    std::cout << student;
}