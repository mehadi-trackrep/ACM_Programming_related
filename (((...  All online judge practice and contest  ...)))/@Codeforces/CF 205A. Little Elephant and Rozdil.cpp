#include <bits/stdc++.h>
using namespace std;

int main()  ///AC
{
    int n;
    scanf("%d",&n);
    int mn = INT_MAX;
    int ck=0;
    int pos;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if(x < mn)
        {
            mn = x;
            ck = 0;
            pos = i;
        }
        else if(x == mn) ck = 1;
    }
    if(ck) printf("Still Rozdil\n");
    else printf("%d\n",pos);
}
