#include<stdio.h>
int main()
{
    int j,k,l,t,n,p[200],ara[4000],i,h,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&i);

        for(j=1;j<=i;j++)
            scanf("%d",&p[j]);

        for(j=0;j<=n+10;j++)
            ara[j]=0;

        h=0;

        for(j=1;j<=i;j++)
        {
            d=0;
            for(d=p[j];d<=n;d=d+p[j]){
                //printf("...%d ",d);
                if(d%7!=0 && (d+1)%7!=0 && ara[d]==0){
                    ara[d]=1;
                    h++;}
            }
            //printf("\n");
        }

        printf("%d\n",h);
    }
    return 0;
}
