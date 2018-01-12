#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a;
    int x,p=1,cnt=0;
    scanf("%d%d",&n,&k);
    while(n--)
    {
        scanf("%d",&x);
        if(x >= k)
        {
            a = k;
            while(a <= x)
            {
                if(a >= p){
                    cnt++;
                    printf("=>%d,",p);
                }
                a += k;
                p++;
            }
        }
        else
        {
            if(x >= ++p)
                cnt++;
            p++;
        }
        printf("=>=>%d,",p);
        cout << endl;
    }
    printf("%d",cnt);
    return 0;
}

/*

5 5
10 12 6 10 2

*/
