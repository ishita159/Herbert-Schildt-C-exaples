#include<bits/stdc++.h>
using namespace std;
class cl
{
    public: 
           cl(int i) 
           {
               val = i;
           }
           int val;
           int double_val()
           {
               return val+val;
           }
};
int main()
{
    int cl::*data;
    int (cl::*func)();
    cl ob1(1), ob2(2);
    data = &cl::val;
    func = &cl::double_val;
    cout << "here are the values: ";
    cout << ob1.*data << " " << ob2.*data << "\n";
    cout << "Here they are doubled: ";
    cout << (ob1.*func)() << " ";
    cout << (ob2.*func)() << "\n";
    return 0;
}