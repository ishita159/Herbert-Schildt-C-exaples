#include<bits/stdc++.h>
using namespace std;
int main()
{
    //define anonymous union
    union
    {
        long l;
        double d;
        char s[4];
    };
    //now reference union elements directly
    l = 100000;
    cout << l << " ";
    d = 123.2344;
    cout << d << " ";
    strcpy(s, "hi!");
    cout << s;
    return 0;
}