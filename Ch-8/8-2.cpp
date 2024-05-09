#include <iostream>
using namespace std;

/*
    Operator overloading:

*/

class Demo
{
    int a;

public:
    void setA(int a) { this->a = a; }
    void getA() { cout << "A: " << a << endl; }

    // Binary
    Demo operator+(Demo d2)
    {
        Demo tmp;
        tmp.a = a + d2.a;
        return tmp;
    }

    Demo operator*(Demo d2)
    {
        Demo tmp;
        tmp.a = a * d2.a;
        return tmp;
    }

    // Unary
    void operator++(int n)
    {
        a++;
    }
    void operator++()
    {
        ++a;
    }
};

int main()
{
    Demo d1, d2, d3;

    d1.setA(10);
    d2.setA(20);

    d3 = d1 + d2;
    //  d3 = d1.operator+(d2);

    // Post
    d3++; // d3 = d3 + 1;
    // d3.operator++(1);

    // Pre
    ++d3; // d3 = 1 + d3;
    // d3.operator++();

    d3.getA();

    return 0;
}