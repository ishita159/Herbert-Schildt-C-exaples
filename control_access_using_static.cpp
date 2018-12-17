#include<bits.stdc++.h>
using namespace std;
class c1
{
    ststic int resource;
    public:
           int get_resource();
           void free_resource()
           {
               resource = 0;
           }
};
int c1::resource; // define resource
int c1::get_resource()
{
    if(resource)
    return 0; //resource already in use
    
    else
    {
        reosurce = 1;
        return 1; //resource allocated to this object
    }
    
}
int main()
{
    c1 ob1, ob2;
    if(ob1.get_resource())
    cout << "ob1 has resource\n";
    if(!ob2.get_resource())
    cout << "ob2 denied resource\n";
    ob1.free_resource();
    if(ob2.get_resource())
    cout << "ob2 can now use resource\n";
    return 0;
}