/*

Write a recursive function that finds the gcd of two non-negative integers.

Input:
25 8895
Output:
5


*/

#include <bits/stdc++.h>
using namespace std;

int n;
string str;

int gcd(int a,int b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        int ck = gcd(a,b);
        printf("%d\n",ck);
    }

    return 0;
}




