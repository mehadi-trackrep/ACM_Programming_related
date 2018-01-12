#include <bits/stdc++.h>
using namespace std;
int Jack[1000000],Jill[1000000];
int main()
{
    int N,M,i,j,count;
    while(scanf("%d%d",&N,&M) && N != 0 && M != 0)
    {
        map <int,int> mp;
        for(i = 0; i < N; i++){
            scanf("%d",&Jack[i]);
            mp[Jack[i]]++;
        }
        for(i = 0; i < M; i++){
            scanf("%d",&Jill[i]);
            mp[Jill[i]]++;
        }
        count = 0;
        map <int,int> :: iterator it;
        for(it = mp.begin(); it!=mp.end(); it++){
            int value = it->second;
            if(value > 1)
                count += (value-1);
        }
        printf("%d\n",count);
    }

    return 0;
}
