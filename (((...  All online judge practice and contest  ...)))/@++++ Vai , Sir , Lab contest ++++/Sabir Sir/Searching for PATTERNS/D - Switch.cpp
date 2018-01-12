#include<bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    while(cin >> N)
    {
        int cnt1=0,cnt2 = 0,ind=0;  ///AC
        int x;

        int ara[10005];

        for(int i=1; i<=N; i++)
        {
            scanf("%d",&x);
            if(ind%2 == 0)
            {
                if(x == 0) cnt1++;
                else cnt2++;
            }
            else
            {
                if(x == 1) cnt1++;
                else cnt2++;
            }
            ind++;
        }
        if(cnt1 >= cnt2)
            printf("%d\n",cnt2);
        else
            printf("%d\n",cnt1);
    }
    return 0;
}

/*

3 1 1 1
3 1 0 1


*/


