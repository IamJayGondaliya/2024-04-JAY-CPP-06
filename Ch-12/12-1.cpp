#include <iostream>
using namespace std;

/*
        Exception blocks:

            try {
                // Code which may occure an exception
                throw data/solution/exception;
            }
            catch(data_type value) {        // catch on() || on..catch
                // To handle specific exceptions
            }
            catch(...) {                    // catch
                // General catch block
                // To handle any exceptions
            }
            // Finaly block - it occures no matter exception is thrown or not

*/

int main()
{

    int a = 10, b = 0;

    cout << "Start..." << endl;

    try
    {
        if (b == 0)
        {
            throw '1';
        }
        else
        {
            cout << "Answer: " << a / b << endl; // Exception
        }
    }
    catch (int n)
    {
        cout << "Cannot devide by ZERO!" << endl;
    }
    catch (double n)
    {
        cout << "Cannot devide by ZERO!" << endl;
    }
    catch (...)
    {
        cout << "General Exception!" << endl;
    }

    cout << "End..." << endl;

    return 0;
}