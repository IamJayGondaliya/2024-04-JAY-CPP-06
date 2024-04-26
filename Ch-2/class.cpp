#include <iostream>
using namespace std;

/*
    Access Modifiers    /   Access Specifiers   /   Visibility Modifiers:
        - Defines the scope of accessibility of the class data.

        - Private   =>  Limited to the class. [DEFAULT]
        - Protected =>  Limited to the parent and child class.
        - Public    =>  Accessible to everywhere using objest.
*/

class Student
{
private:
    // Attributes   ->  Variables   ->  Properties
    int id;
    string name;
    double per;

public:
    // Methods      ->  Functions
    void setData()
    {
        cout << "Enter id\t: ";
        cin >> id;

        cout << "Enter name\t: ";
        cin >> name;

        cout << "Enter per\t: ";
        cin >> per;
    }

    void getData()
    {
        cout << "Id\t: " << id << endl
             << "Name\t: " << name << endl
             << "Per\t: " << per << endl;
    }
};