#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,l,r,t=1,count = 0;
    scanf("%d%d",&n,&x);
    for(int i=1; i<=n ;i++)
    {
        scanf("%d%d",&l,&r);
        while(t+x <= l)
        {
            t += x;
        }
        if(t <= l){
            count += (r-t)+1;
            t=r+1;
        }
        //printf("=>%d\n",t);
    }

    printf("%d\n",count);

    return 0;
}

/*

2 1
5 6
8 10

*/
