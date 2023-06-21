//
// Created by Usuario on 31/05/2023.
//

#ifndef INFORMATICA2_PARENT_H
#define INFORMATICA2_PARENT_H


class Parent {

    private:
        int foo;

    public:
        Parent();

        explicit Parent(int foo);

        virtual void fooBar() = 0;

        int getFoo() const;

        void setFoo(int foo);
};


#endif //INFORMATICA2_PARENT_H
