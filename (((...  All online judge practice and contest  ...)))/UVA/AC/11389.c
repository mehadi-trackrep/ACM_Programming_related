#include <stdio.h>
void selection_sort(int ara[],int n);
int main()
{

    int n,d,r,i,day_time,total_time;
    int mor_route[105],eve_route[105]; /// n ti bus driver and n ti morning route and n ti evening route

    while(scanf("%d%d%d",&n,&d,&r)){

        if(n == 0 && d == 0 && r == 0)
            break;

        for(i = 0;i < n;i++)
            scanf("%d",&mor_route[i]);

        for(i = 0;i < n;i++)
            scanf("%d",&eve_route[i]); /// check corner case

        selection_sort(mor_route, n);
        selection_sort(eve_route, n);

        total_time = 0;

        for(i = 0;i < n;i++){

            day_time = mor_route[i] + eve_route[n-i-1];
            if(day_time > d)
                total_time += (day_time - d);

        }

        printf("%d\n",total_time*r);

    }

    return 0;
}

void selection_sort(int ara[],int n){

    int i,j,min_index;

    for(i = 0;i < n;i++)
    {
        min_index = i;

        for(j = i+1;j < n;j++)
        {
            if(ara[min_index] > ara[j])
            {
                ara[min_index] = ara[min_index] ^ ara[j];
                ara[j] = ara[min_index] ^ ara[j];
                ara[min_index] = ara[min_index] ^ ara[j];
            }
        }
    }

}

