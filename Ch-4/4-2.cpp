#include "class.cpp"

int main()
{

    int n = Student::getStudentCount();

    // Array of students
    Student s[n];

    for (int i = 0; i < n; i++)
    {
        s[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].getData();
    }

    return 0;
}