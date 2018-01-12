#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{

    int n,x,l[52],r[52],fm = 1;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }
    int ans  = 0,cnt = 0;
    for(int i = 0; i < n; i++)
    {
        while(fm+x <= l[i])fm+=x;
        if(fm <= l[i])
        {
            while(fm <= r[i])
            {
                cnt++;
                fm++;
            }
        }

        printf("=>%d\n",fm);
    }

    cout << cnt << endl;

    return 0;
}
