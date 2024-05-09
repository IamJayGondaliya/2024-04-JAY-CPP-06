#include "class.cpp"

/*
    Ch-11 Data Abstraction:

        - What is data abstraction?
            - to prevent the user from accessing the data.

            - Using access modifiers
            - Using abstract class

        - Using access modifiers:

                        Private     Protected   Public
            -------------------------------------------------
            P Class     Yes         Yes         Yes
            C Class     No          Yes         Yes
            Main        No          No          Yes
*/

int main()
{

    Employee e;

    e.getSalary();

    return 0;
}