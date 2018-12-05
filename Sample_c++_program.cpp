#include<iostream>
using namespace std;

int main()
{
    int i;
    cout << "This is output.\n"; //this is asingle line comment
    /* you can still use C style comment*/
    // input a number using >>
    cout << "Enter a number: ";
    cin >> i;
    //now output a number using <<
    cout << i << " Squared is " << i*i << "\n";

    return 0;
    }
