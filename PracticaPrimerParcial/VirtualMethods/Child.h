//
// Created by Usuario on 31/05/2023.
//

#ifndef INFORMATICA2_CHILD_H
#define INFORMATICA2_CHILD_H


#include "Parent.h"

class Child : public Parent{
    private:

    public:
        Child();
        Child(const Child &child);

        void fooBar() override;
        Child operator=(const Child &child);

};


#endif //INFORMATICA2_CHILD_H
