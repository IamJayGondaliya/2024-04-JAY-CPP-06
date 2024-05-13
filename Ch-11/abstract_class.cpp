#include <iostream>
using namespace std;

/*
    Abstract class:
        - which can't be instantiated.
        - we can't create an object/instance of this class.
        - it contains pure virtual method to be overridden by
          child classes.
        - Pure virtual method:
                virtual return_type fun_name() = 0;
        - NOTE:
            - if we can't override this method, the child
              class will also become abstract class.
*/

class Lock
{
public:
    // Pure virtual method
    virtual void key(int a) = 0;

    Lock()
    {
        cout << "Lock is opened" << endl;
    }
};

class Door : public Lock
{
public:
    // Overridden virtual method
    void key(int a)
    {
        cout << "This is the key" << endl;
    }

    Door()
    {
        cout << "Door is opened" << endl;
    }
};
