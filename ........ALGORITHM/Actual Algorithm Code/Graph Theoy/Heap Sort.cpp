#include <stdio.h>
int main()
{
    int a,b,c,i,j,k,ara[10000],t,s,r,max,last,u,w,n;
    scanf("%d",&n);
    last=n;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    b=0;
    for(u=n; u>=1; u--)
    {
        // int ara[1000]={4,2,9,-1,5,5,3,7,4,8,2,9,1,3};
        for(i=last/2; i>=1; i--)
        {
            // printf("%d  ",i);
            j=i;
            t=j*2;
            s=j*2+1;
            if(s>last)max=t;
            else if(ara[t]>=ara[s])max=t;
            else max=s;
            // printf("%d %d\n",ara[max],max);
            while(ara[j]<ara[max]&&max<=last&&j>0)
            {
                // if(ara[t]<ara[s])max=t;
                //else max=s;
                if(ara[max]>ara[j])
                {
                    r=ara[max];
                    ara[max]=ara[j];
                    ara[j]=r;
                }
                if(ara[max]<ara[max*2]||ara[max]<ara[(max*2)+1])
                {
                    j=max;
                    t=max*2;
                    s=(max*2)+1;
                }
                //}
                else
                {
                    j=j/2;
                    t=j*2;
                    s=j*2+1;
                }
                if(s>last)max=t;
                else if(ara[t]>=ara[s])max=t;
                else max=s;
                // printf("%d: ",b);
                b++;
                //  for(k=1;k<=n;k++)printf("%d ",ara[k]);
                //  printf("\n");
                // j=j/2;
            }
        }
        // printf("heap :\n");
        // for(i=1;i<=9;i++)printf("%d ",ara[i]);
        // printf("\n");
        w=ara[last];
        ara[last]=ara[1];
        ara[1]=w;
        last=last-1;
    }
    for(i=1; i<=n; i++)printf("%d ",ara[i]);
}
