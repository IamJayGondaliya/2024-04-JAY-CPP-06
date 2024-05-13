#include <iostream>
using namespace std;
/*
    - Operator overloading:
        - Modify the operator in suh way to perform
          operation on objects also.
*/

class Data
{
    int a;

public:
    void setData()
    {
        cout << "Enter a: ";
        cin >> a;
    }
    void getData() { cout << "a: " << a << endl; }

    // Binary operator overloading
    Data operator+(Data d2)
    {
        Data tmp;
        tmp.a = a + d2.a;
        return tmp;
    }

    // Unary operator overloading
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
    Data d1, d2, d3;

    d1.setData();
    d2.setData();

    d3 = d1 + d2;
    // d3 = d1.operator+(d2);

    // POST
    d3++;
    // d3 = d3 + 1;
    // d3.operator++(1);

    // PRE
    ++d3;
    // d3 = 1 + d3;
    // d3.operator++();

    d3.getData();

    return 0;
}
