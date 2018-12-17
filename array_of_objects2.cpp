#include <bits/stdc++.h>
using namespace std;
class cl 
{
    int i;
    public: 
           cl(int j)
           {
               i=j;
           }
           int get_i()
           {
               return i;
           }

};
int main()
{
    cl ob[3] = {1,2,3};
    int i;
    for(i=0;i<3;i++)
    {
        cout << ob[i].get_i() << "\n";
    }
    return 0;
}