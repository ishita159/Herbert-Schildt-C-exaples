#include<bits/stdc++.h>
using namespace std;
class c1
{
    static int resource;
    void free_resource()
    {
        resource =0;
    }
};
int c1::resource; //define resource
int c1::get_resource()
{
    if(resource)
    return 0;
    
    else
    {
        resource =1;
        return 1; //resource alloacted to this object
    }
    
}
int main()
{
    c1 ob1, ob2;
    /* get_resource() is static so may be called independent*/
    //of any obejct
    if(!c1::get_resources())
    cout << "ob1 has resource\n";
    if(!c1::get_resource())
    cout << "ob2 denied resource\n";
    ob1.free_resource();
    if(ob2.get_resource()) //can still call using object syntax
    cout << "ob2 can now use resource\n";
    return 0;
}