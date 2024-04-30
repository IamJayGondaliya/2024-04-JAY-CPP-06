#include <iostream>
using namespace std;

// Parent class
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

// Child class
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

    void getSum()
    {
        cout << "Sum: " << a + b << endl;
    }
};