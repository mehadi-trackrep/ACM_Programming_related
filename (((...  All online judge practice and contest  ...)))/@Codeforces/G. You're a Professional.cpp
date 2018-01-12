#include <bits/stdc++.h>
using namespace std;

int main()
{
    int F,I,T;
    char str[10][10];
    scanf("%d%d%d\n",&F,&I,&T);

    for(int i=0; i<F;i++)
    {
        scanf("%s",str[i]);
    }
    int total = 0;

    map <int,int> mp;
    mp.clear();

    for(int i=0; i<F;i++)
    {
        int cnt = 0;
        vector <int> v;
        v.clear();
        for(int j=0; j<I; j++)
        {
            if(str[i][j] == 'Y'){
                cnt++;
                v.push_back(j);
            }
        }
        if(cnt >= T)
        {
            for(int k=0; k<v.size(); k++)
            {
                mp[v[k]]++;
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
