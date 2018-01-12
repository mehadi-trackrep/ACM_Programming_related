/*

Write a recursive solution to get the reverse of a given integer. Function must return an int

Input:
123405
Output:
504321


*/

#include <bits/stdc++.h>
using namespace std;

int rev=0;
int n;

int reverse(int x)
{
    if(x == 0) return rev;
    rev = rev*10 + (x%10);
    return reverse(x/10);
}

int main()
{
    while(cin >> n)
    {
        rev = 0;
        int a = reverse(n);
        printf("%d\n",a);
    }

    return 0;
}

/*

5
2 4 6 7 9

2
5 7

*/

