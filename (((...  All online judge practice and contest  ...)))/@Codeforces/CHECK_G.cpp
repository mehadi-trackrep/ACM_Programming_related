#include <bits/stdc++.h>
using namespace std;

int main()
{
    int F,I,T;
    char str[10][10];
    while(scanf("%d%d%d\n",&F,&I,&T) == 3){

        for(int i=0; i<F;i++)
        {
            scanf("%s",str[i]);
        }

        map <int,int> mp;
        mp.clear();

        for(int i=0; i<F;i++)
        {

            for(int j=0; j<I; j++)
            {
                if(str[i][j] == 'Y'){
                    mp[j]++;
                }
            }

        }

        map <int,int> :: iterator it;

        int cnt = 0;

        for(it = mp.begin(); it!=mp.end(); it++)
        {
            int val = it->second;
            if(val >= T)
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}

/*

3 3 2
YYY
NNN
YNY

4 4 1
NNNY
NNYN
NYNN
YNNN

*/
