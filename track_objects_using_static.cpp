#include<bits/stdc++.h>
using namespace std;
class Counter 
{
   public:
          static int count;
          Counter()
          {
              count++;
          }
          ~Counter()
          {
              count--;
          }

};
int Counter::count;
void f();
int main(void)
{
    Counter o1;
    cout << "Objetcs in existance:";
    cout << Counter::count << "\n";
    Counter o2;
    cout << "Objects in exixtance: ";
    cout << Counter::count << "\n";
    f();
    cout << "Obejcts in exiastnce: ";
    cout << Counter::count << "\n";
    return 0;
}
void f()
{
    Counter temp;
    cout << "Objects in existance: ";
    cout << Counter::count << "\n";
    // temp is destroyed when f() returns
}

