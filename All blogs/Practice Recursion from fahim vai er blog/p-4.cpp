/*

Write a recursive solution to print the polynomial series for any input n:
1 + x + x2 + ................. + xn-1 // n-1 hocce power...

Input:
5
Output:
1 + x + x^2 + x^3 + x^4

*/

#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void rf(int ind)
{
    if(ind == n) return ;

    else if(ind == 0)
        str = "1";
    else if(ind == 1)
        str += " + x";
    else
    {
        str += " + x^";
        str += ind+'0'; /// only for n < 10
    }

    rf(ind+1);

}

int main()
{
    cin >> n;
    rf(0);
    cout << str << endl;
    printf("\n");
    return 0;
}


