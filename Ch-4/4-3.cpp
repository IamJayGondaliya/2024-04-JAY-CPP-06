#include "class.cpp"

/*

    Constructor:
        - It is a block of code which can be automatically invoked when the class is instanciated.
        - Defines the types of objects.

        - Syntax:
            ClassName([Parameters]) {
                 CODE
            }

        - Value initializer.

    Rules:
        - name must be same as class name.
        - can't have a return type.
        - can't return any value.

    Types:
        - Default constructor
        - Parameterized constructor
        - Copy constructor

    Destructor:
        - It is a block of code which can be automatically invoked when the object is destroyed from the memory.

        - Syntax:
            ~ClassName([Parameters]) {
                 CODE
            }

        - Rules:
            - name must be same as class name with '~' as pre-fix.
            - can't have a return type.
            - can't return any value.
            - can't have any parameters.

*/

int main()
{
    // Default
    Student s1;
    // Parameterized
    Student s2("Aman", 75.41);
    // Copy
    Student s3 = s2;

    return 0;
}