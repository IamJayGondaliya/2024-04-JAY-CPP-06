#include <iostream>
using namespace std;

class PizzaSize
{
public:
    static string R;
    static string M;
    static string L;
    static string XL;
    static string MS;
};

string PizzaSize::R = "Regular";
string PizzaSize::M = "Medium";
string PizzaSize::L = "Large";
string PizzaSize::XL = "Extra large";
string PizzaSize::MS = "Monster (24 inch)";

class Dominoz
{
public:
    void pizza()
    {
        cout << "You have ordered Pizza..." << endl;
    }
    void pizza(string size)
    {
        cout << "You have ordered Pizza of size " << size << "..." << endl;
    }
    void pizza(string size, string orderType)
    {
        cout << "You have ordered Pizza of size " << size << "..." << endl;
        cout << "Your order type: " << orderType << endl;
    }
};

class Lapinoz : public Dominoz
{
public:
    void pizza()
    {
        cout << "---------Lapinoz------------" << endl;
        cout << "You have ordered Pizza..." << endl;
        cout << "----------------------------" << endl;
    }
};