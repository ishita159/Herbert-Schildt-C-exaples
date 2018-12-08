#include<bits/stdc++.h>
using namespace std;

class myclass
{
    int a,b;
    public:
           void init(int i,int j);
           void show();
};
//creat and inline function
inline void myclass::show()
{
    cout << a <<" " << b << "\n";
}
int main()
{
    myclass x;
    x.init(10,20);
    x.show();
    return 0;
}

