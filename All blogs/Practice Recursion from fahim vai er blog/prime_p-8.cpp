/*

Write a recursive program to determine whether a given integer is prime or not.

Input:
49
999983
1
Output:
not prime
prime
not prime

*/

#include <bits/stdc++.h>
using namespace std;

int n;
string str;

int prime(int val,int x)
{
    if(x == 1) return 0;
    if(val*val > x) return 1;
    if(x % val == 0)
        return 0;
    else prime(val+1,x);

}

int main()
{
    while(cin >> n)
    {
        int ck = prime(2,n);
        if(ck == 0) printf("not prime\n");
        else printf("prime\n");
    }
    printf("\n");
    return 0;
}



