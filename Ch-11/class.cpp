#include <iostream>
using namespace std;

class Admin
{
private:
    string c_name = "CMP";
    int profit = 1000000;
    int m_salary = 35000;
    int e_salary = 15000;

public:
    // Setters
    void setCompanyName(string name)
    {
        c_name = name;
    }
    void setCompanyProfit(int p)
    {
        profit = p;
    }
    void setMngSalary(int s)
    {
        m_salary = s;
    }
    void setEmpSalary(int s)
    {
        e_salary = s;
    }

    // Getters
    void getCompanyName()
    {
        cout << "Company name: " << c_name << endl;
    }
    void getCompanyProfit()
    {
        cout << "Company profit: " << profit << endl;
    }
    void getMngSalary()
    {
        cout << "Manager salary: " << m_salary << endl;
    }
    void getEmpSalary()
    {
        cout << "Emp salary: " << e_salary << endl;
    }
};

class Manager : Admin
{
public:
    void setEmpSlry(int s)
    {
        setEmpSalary(s);
    }

    void getEmpSlry()
    {
        getEmpSalary();
    }
};

class Employee : Manager
{
public:
    void getSalary()
    {
        getEmpSlry();
    }
};