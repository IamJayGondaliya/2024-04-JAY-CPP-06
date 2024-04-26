#include "class.cpp"

/*
    4 principles of OOP:

        1. Encapsulation:   to combine/to wrap
        2. Inheritence:     to share
        3. Polymorphism:    to behave in multiple way
        4. Abstraction:     to secure/to hide

    1. Encapsulation:
        - is a concept in which we combines the data into the class.

        - variables =>  Attributes
        - functions =>  Methods
                        - setter
                            - the function which sets/assigns the value
                              to the attributes.
                        - getter
                            - the function which gives the value of
                              attributes.

        - this keyword:
            - the instance/reference/object of the current class.
            - represents the class level values.

            - Syntax:

                this->attr;
                this->method();

*/

int main()
{
    Student s;

    s.setId(101);

    cout << "Id: " << s.getId() << endl;
}