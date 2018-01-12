#include <stdio.h>
int main()
{
    int n,i,j,ch = 1,k=1;

    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++){

        for(j = n-i ; j >= 1 ; j--)
            printf(" ");

        for(j = 1 ; j <= ch ; j++ ){
            if(j == 1 || j == ch)     /// এখানে ch  হচ্ছে প্রতি row এ element সংখ্যা , মাঝখানের space সহ
                printf("%d",k);
            else
                printf(" ");
        }

        printf("\n");

        ch+=2;
        k++;
    }      /// ei line er por k o ch er man 1 and 2 kore bere jai , ejonno , niche k o ch er man change kora hoece

    k = k-2;
    ch = (ch-2) - 2;

    for(i = 1 ; i <= n-1 ; i++){

        for(j = i ; j >= 1 ; j--)
            printf(" ");

        for(j = 1 ; j <= ch ; j++ ){
            if(j == 1 || j == ch)
                printf("%d",k);
            else
                printf(" ");
        }

        printf("\n");

        ch-=2;
        k--;
    }

    return 0;
}

