#include<bits/stdc++.h>
using namespace std;
void neg(int *i);
int main()
{
    int x;
    x = 10;
    cout << x << "\n";
    return 0;
}
void neg(int *i)
{
    *i = -*i;
}