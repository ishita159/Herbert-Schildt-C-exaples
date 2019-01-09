#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i, gcd;
    printf("Enter two numbers such that a<b");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("greatest common divisor of %d and %d is: %d", a, b, gcd) ;
    int LCM = (a*b)/gcd;
    printf("\n %d",LCM);
    return 0;
}