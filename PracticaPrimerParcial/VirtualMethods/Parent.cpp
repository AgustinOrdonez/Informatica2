#include <iostream>
#include "Parent.h"

Parent::Parent(int foo) : foo(foo) {}

void Parent::fooBar() {
    std::cout << "Parent fooBar" << std::endl;

}

Parent::Parent() {}

int Parent::getFoo() const {
    return foo;
}

void Parent::setFoo(int foo) {
    Parent::foo = foo;
}

