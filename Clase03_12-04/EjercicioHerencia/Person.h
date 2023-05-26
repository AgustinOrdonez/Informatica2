#ifndef INFORMATICA2_PERSON_H
#define INFORMATICA2_PERSON_H


#include <string>

class Person{
protected:
    std::string name;
    std::string surname;
    unsigned int age;
    unsigned int dni;


public:
    Person();
    Person(std::string name,std::string surname,unsigned int age,unsigned int dni);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);

    unsigned int getAge() const;

    void setAge(unsigned int age);

    unsigned int getDni() const;

    void setDni(unsigned int dni);

    friend std::ostream &operator<<(std::ostream &o, const Person &person);

};



#endif //INFORMATICA2_PERSON_H
