#include "class.cpp"

/*
    Ch-8: Polymorphism:
        - to behave in multiple ways.
        - Poly      : Multiple
        - Morphs    : Behaviour, Structure, Forms

    - Types:
        - Compile time:
            - Method Overloading
            - Operator Overloading
            - Constructor Overloading
        - Run time:
            - Method Overriding
            - Virtual functions

    - Method overloading:
        - is a concept where we create multiple methods with same name
          in one class.
        - class must be same.
        - name must be same.
        - parameters must be different.

    - Method overriding:
        - is a concept where we same named and parameters method in child class.
        - class must be child(deriver).
        - name must be same.
        - parameters must be same.
*/

int main()
{
    Dominoz d;

    d.pizza();
    d.pizza(PizzaSize::MS);
    d.pizza(PizzaSize::L, "Parcel");

    cout << "====================================" << endl;

    Lapinoz l;

    l.pizza();
}