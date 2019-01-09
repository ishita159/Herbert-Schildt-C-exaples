#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p, i;

    try
    {
        p = new int;
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failure\n";
        return 1;
    }
    for(i=0; i<10; i++)
    {
        p[i] = i;
    }
    for(i=0; i<10; i++)
    {
        cout << p[i] << " ";

    }
    delete [] p;
    return 0;
}
