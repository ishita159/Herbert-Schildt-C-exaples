#include<bits/stdc++.h>
using namespace std;

class balance 
{
    double cur_bal;
    char name[80];
    public:
            balance(double n, char *s)
            {
                cur_bal = n;
                strcpy(name, s);
            }
            balance()
            {
                //parameterless constructor
            }
            ~balance()
            {
                cout << "Destructuing";
                cout << name << "\n";
            }
            void set(double n, char *s)
            {
                n = cur_bal;
                strcpy(s, name);
            }
};

int main()
{
    balance *p;
    char s[80];
    double n;
    int i;

    
    try
    {
        p = new balance [3];
    }
    catch(bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        return 1;
    }    
    p[0].set(1234.78, "Ralph");
    p[1].set(12434.55, "Joseph");
    p[2].set(14535.4, "Jonathan");

    for(i=0; i < 3; i++)
    {
        p[i].get_bal(n,a);
    
    cout << s << "'s balance is:";
    cout << "\n";
    }
    delete [] p;
    return 0;

}