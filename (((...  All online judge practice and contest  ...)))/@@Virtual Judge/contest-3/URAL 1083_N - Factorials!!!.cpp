#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    scanf("%d",&n);
    cin >> str;

    int len = str.length(); /// AC
    int fact = 1;

    for(int i=0; n>0; i++)
    {
        fact *= n;
        n -= len;
    }

    printf("%d\n",fact);

    return 0;
}
