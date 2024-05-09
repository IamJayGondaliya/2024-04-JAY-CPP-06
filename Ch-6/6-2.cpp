#include "class-2.cpp"

/*
    - Types of inheritence:
        - Multiple
        - Hierarchical
        - Hybrid
    - Error of ambiguity
    - How to resolve the ambiguity

*/

int main()
{
    D d;

    d.B::setA();
    d.setB();
    d.setC();
    d.setD();

    d.B::getA();
    d.getB();
    d.getC();
    d.getD();

    return 0;
}