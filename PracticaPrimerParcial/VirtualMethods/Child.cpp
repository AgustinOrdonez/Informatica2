//
// Created by Usuario on 31/05/2023.
//

#include <iostream>
#include "Child.h"

void Child::fooBar() {
    std::cout << "Child fooBar" << std::endl;
}

Child::Child() : Parent(1) {
    this->setFoo(2);
    std::cout << "Child constructor" << std::endl;
}

Child::Child(const Child &child) {
//    std::cout << "Child copy constructor" << std::endl;

}

Child Child::operator=(const Child &child) {

    return Child();
}
