#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    scanf("%d",&n);
    getchar();
    cin >> str;

    int len = str.length();
    int fact = 1;

    for(int i=0;;i++)
    {
        if((n-(i*len)) >= 1){
            fact *= (n-(i*len));
            continue;
        }
        if(n%len == 0){
            fact *= len;
            printf("%d",fact);
            break;
        }
        else
        {
            fact *= (n%len);
            printf("%d",fact);
            break;
        }
    }

    return 0;
}

