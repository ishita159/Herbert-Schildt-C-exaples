#include<iostream>
using namespace std;
#define SIZE 100

//this creates the class stack.
class stack
{
    int stck[SIZE];
    int tos;
public:
    void init();
    void push(int i);
    int pop();           
};
void stack::init()
{
    tos=0;
}
void stack::push(int i)
{
    if(tos==SIZE)
    {
        cout<<"STACK IS FULL.\n";
        return;
    }
    stck[tos]=i;
    tos++;
}
int stack::pop()
{
    if(tos=0)
    {
        cout<<"STACK UNDERFLOW.\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stack stack1, stack2;
    int i=1,j=2,k=3,l=4;
    stack1.init();
    stack2.init();
    
    stack1.push(i);
    stack2.push(j);
    stack1.push(k);
    stack2.push(l);

    cout << stack1.pop() << " ";
    cout << stack1.pop() << " ";
    cout << stack2.pop() << " ";
    cout << stack2.pop() << "\n";

    return 0;
}