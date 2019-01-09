#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p;

    try
    {
        p = new int;
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failure\n";
        return 1;
    }
    *p = 100;
    cout < < < "At " << p << " ";
    cout << "is the value" << *p << "\n";
    delete p;
    return 0;
}