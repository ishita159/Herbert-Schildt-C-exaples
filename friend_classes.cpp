#include<bits.stdc++.h>
using namespace std;
clas TwoValues
{
    int a;
    int b;
    public:
           TwoValues(int i, int j)
           {
               a=i;
               b=j;
           }
           friend class Min;
};
class Min
{ 
    public:
           int min(TwoValues x);

};
int Min::min(TwoValus x)
{
    return x.a < x.b ? x.a : x.b;
}
int main()
{
    TwoValues ob(10,20)
    Min m;
    cout << m.min(ob);
    return 0;
}
