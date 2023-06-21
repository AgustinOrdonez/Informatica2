#include <iostream>
#include <vector>
#include "Parent.h"
#include "Child.h"

int main() {
    Parent *parent = new Child();
//    Child *child = (Child *) new Parent(); //Child cannot be parent but can cast pointer
//    std::cout << "Casted child: ";
//    child->fooBar();
    std::cout << "Parent Pointer to child: ";
    parent->fooBar();

    Child chid1;
    chid1.setFoo(5);

    Parent &parent2 = chid1;
    std::cout << "Parent reference to child: ";
    parent2.fooBar();



    Parent parent1;
    Child child1;
//    child1=(Child)parent1;//Can't cast parent to child
    std::cout << "Parent = child: ";
    parent1 = child1;
    parent1.fooBar();

//    Child array[1];
//    array[0] = child1;
    std::vector<Parent *> vector1;

    vector1.push_back(parent);

    vector1.at(0)->fooBar();

    return 0;
}