#include<bits/stdc++.h>
using namespace std;
void swap(int &i, int &j)

int main()
{
  int a,b,c,d;
  a=1;
  b=2;
  c=3;
  d=4;
  cout << "a and b: " << a << " " << b << "\n";
  swap(a,b);
  cout << "a and b: " << a << " " << b << "\n";
  cout << "c and d: " << c << " " << d << "\n";
  swap(c,d);
  cout << "c and d: " << c << " " << d << "\n";
  return 0;
}
void swap(int &i, int &j)
{
    int t;
    t = i;
    i = j;
    j = t;
}
