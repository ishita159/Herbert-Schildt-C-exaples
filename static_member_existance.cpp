#include<bits/stdc++.h>
using namespace std;
class shared
{
    public:
          static int a;
};
int shared::a; //define a
int main()
{
    //initialize a before creating any objects
    shared::a = 99;
    cout << "This is the initial value of a: " << shared::a;
    cout << "\n";
    shared x;
    cout << "This is x.a: " << x.a;
    return 0; 
}