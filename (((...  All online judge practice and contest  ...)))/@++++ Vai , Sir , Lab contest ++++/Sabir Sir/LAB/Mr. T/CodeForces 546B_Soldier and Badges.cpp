#include <bits/stdc++.h>
using namespace std;

int main()
{


    int n,i,j,c1=0,c2=0,t,maxx=0;

    map<int,int> mp;

    cin>>n;

    while(n--)
    {
        cin>>t;

       mp[t]++;

    }


    map<int,int> :: iterator it;

    int cnt = 0;

    for(it = mp.begin();it != mp.end(); it++)
    {
        int sz = it->second;
        int val = it->first;    ///AC
        while(sz>1)
        {
            int a = val;
            while(1)
            {
                if(mp[++a] == 0)
                {
                    cnt += (a - val);
                    mp[a] = 1;
                    break;
                }
            }
            sz--;
        }
    }

    printf("%d\n",cnt);

    return 0;
}
