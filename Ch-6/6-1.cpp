#include "class.cpp"

/*
    What is inheritence?
        - to share data from one class to another class.
        - Parent class  : the class which shares the data to another class.
        - Child class   : the class which gets the data from another class.

        - Parent class  >>  Super class >> Base class
        - Child class   >>  Sub class   >> Derived class

    Syntax:
        // Parent class
        class ParentClass {

        };

        // Child class
        class ChildClass : access_modifier ParentClass {

        };

        - Parent class only passes public or protected data to the child class.
*/

int main()
{
    B b1;

    b1.setA();
    b1.setB();

    b1.getA();
    b1.getB();

    b1.getSum();

    return 0;
}