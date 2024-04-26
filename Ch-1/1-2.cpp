#include <iostream>
using namespace std;

/*
        cout <<     =>  Insertion
        cin  >>     =>  Extraction
*/

int main()
{
    int n;

    cout << "Enter length of array: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}