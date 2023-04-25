#ifndef INFORMATICA2_STUDENT_H
#define INFORMATICA2_STUDENT_H

#include <ostream>
#include "Person.h"

class Student : public Person {
protected:
    unsigned int docket;
    unsigned char carrer;
public:
    Student();

    Student(const std::string &name, const std::string &surname, unsigned int age, unsigned int dni,
            unsigned int docket, unsigned char carrer);

    unsigned int getDocket() const;

    void setDocket(unsigned int docket);

    unsigned char getCarrer() const;

    void setCarrer(unsigned char carrer);

    friend std::ostream &operator<<(std::ostream &os, const Student &student);
};


#endif //INFORMATICA2_STUDENT_H
