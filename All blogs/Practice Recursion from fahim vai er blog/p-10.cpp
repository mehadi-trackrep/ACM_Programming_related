/*

Write a recursive solution to compute LCM of two integers. You must not use the formula lcm(a,b) = (a x b) / gcd(a,b); find lcm from scratch...

Input:
23 488
Output:
11224


*/

#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b, int m)
{
    if(a*m % b == 0) return a*m;
    return lcm(a, b, m+1);
}

int main()
{
    int a, b, l;

    while(scanf("%d %d", &a, &b) == 2)
    {
        l = lcm(a, b, 1);
        printf("%d\n", l);
    }

    return 0;
}






