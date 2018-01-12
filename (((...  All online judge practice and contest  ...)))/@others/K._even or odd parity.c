#include <stdio.h>
int count_one(int n);
int main()
{
    int t,n,ck,c = 1;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        ck = count_one(n); //printf("%d ",ck);
        if(ck % 2 != 0)
            printf("Case %d: odd\n",c++);
        else
            printf("Case %d: even\n",c++);
    }

    return 0;
}

int count_one(int n)
{
    int count = 0;

    while(n >= 1){

        if(n - 2*(n/2) == 1)
            count++;
        //printf("%d ",n - 2*(n/2));
        n /= 2;
    }

    return count;
}
