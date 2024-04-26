#include <iostream>
using namespace std;

int getInt(string varName)
{
    int n;
    cout << "Enter " << varName << ": ";
    cin >> n;
    return n;
}

class Student
{
private:
    // Attributes   ->  Variables   ->  Properties
    int id;
    static int idCounter;
    string name;
    double per;
    static string school;

public:
    // Default constructor
    Student()
    {
        id = idCounter++;

        this->setData();

        cout << "Student " << id << " instanciated" << endl;
    }

    // Parameterized constructor
    Student(string name, double per)
    {
        id = idCounter++;

        this->name = name;
        this->per = per;

        cout << "Student " << id << " instanciated" << endl;
    }

    // Destructor
    ~Student()
    {
        this->getData();
        cout << "Student " << id << " is deleted..." << endl;
    }

    // Methods      ->  Functions
    // setter
    void setData()
    {

        cout << "Enter name\t: ";
        cin >> name;

        cout << "Enter per\t: ";
        cin >> per;
    }

    void setId(int id)
    {
        this->id = id;
    }

    // getter
    void getData()
    {
        cout << "Id\t: " << id << endl
             << "Name\t: " << name << endl
             << "Per\t: " << per << endl
             << "School\t: " << school << endl;
    }

    int getId()
    {
        return id;
    }

    static int getStudentCount()
    {
        int n;
        cout << "Enter the number of students: ";
        cin >> n;
        return n;
    }

    // Static member functions
    static void getLastId()
    {
        cout << "Last Id\t: " << idCounter << endl;
    }
};

// DataType ClassName::attrName = value;
// ::   =>  Membership lebel operator || Scope resolution operator
string Student::school = "GSEB";
int Student::idCounter = 101;
