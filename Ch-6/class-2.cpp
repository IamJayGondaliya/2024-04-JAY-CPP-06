#include <iostream>
using namespace std;

// Multiple
/*
    A   B
     \ /
      C
*/

// Hierarchical
/*
      A
     / \
    B   C
*/

// Hybrid
/*
      A
     / \
    B   C
     \ /
      D
*/

/*
    Data Dupicate   =>  Ambiguous
    Error           =>  Ambiguity
*/

class A
{
protected:
    int a;

public:
    // setter
    void setA()
    {
        cout << "Enter a: ";
        cin >> a;
    }

    // getter
    void getA()
    {
        cout << "a: " << a << endl;
    }
};

class B : public A
{
private:
    int b;

public:
    // setter
    void setB()
    {
        cout << "Enter b: ";
        cin >> b;
    }

    // getter
    void getB()
    {
        cout << "b: " << b << endl;
    }
};

class C : public A
{
protected:
    int c;

public:
    // setter
    void setC()
    {
        cout << "Enter c: ";
        cin >> c;
    }

    // getter
    void getC()
    {
        cout << "c: " << c << endl;
    }
};

class D : public B, public C
{
protected:
    int d;

public:
    // setter
    void setD()
    {
        cout << "Enter d: ";
        cin >> d;
    }

    // getter
    void getD()
    {
        cout << "d: " << d << endl;
    }
};
