#include <stdio.h>
#define MAX 1000000
int Com[MAX];
int total_digit_prime[MAX],d_p_cnt = 0;
void seive();
int main()
{

    int i,j,n,k,l,a,b;

    seive();

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",total_digit_prime[b] - total_digit_prime[a-1]);
    }

    return 0;
}

mark_multiple(int i)
{

    int j;
    for(j = i+i; j <= MAX; j += i)
        Com[j] = 0;

}

void seive()
{

    int i,j,x,sum,ck;

    for(i=2; i<=MAX; i++) Com[i] = 1;

    mark_multiple(2);

    for(i = 3; i <= MAX; i += 2)
    {
        if(Com[i] == 1)
            mark_multiple(i);
    }

    total_digit_prime[0] = 0;
    total_digit_prime[1] = 0;

    for(i = 2; i <= MAX; i++)
    {
        if(Com[i] == 1)
        {
            x = i;
            sum = 0;

            while(x >= 10){
                sum += x%10;
                x /= 10;
            }

            sum += x;

            if(Com[sum] == 1)
                d_p_cnt++;
        }
        total_digit_prime[i] = d_p_cnt;
    }
}

