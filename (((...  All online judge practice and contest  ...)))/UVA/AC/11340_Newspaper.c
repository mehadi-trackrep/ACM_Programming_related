        /// input:
/*

1
7
a 3
W 10
A 100
, 10
k 7
. 3
I 13
7
ACM International Collegiate Programming Contest (abbreviated
as ACM-ICPC or just ICPC) is an annual multi-tiered competition
among the universities of the world. The ICPC challenges students
to set ever higher standards of excellence for themselves
through competition that rewards team work, problem analysis,
and rapid software development.
From Wikipedia.


*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i,k,t,len,table_cent[100],M;
    int total_cents,l,j;
    char text[10000],table[100];
    scanf("%d",&t);

    while(t--){
        scanf("%d",&k);
        getchar();
        for(i = 0;i < k;i++){
            scanf("%c%d",&table[i],&table_cent[i]);  /// arr er size a problem hocce
            getchar();
        }
        scanf("%d",&M);
        total_cents = 0;
        for(i = 0;i <= M;i++){
            gets(text);
            len = strlen(text);
            for(j = 0;j < len;j++){
                for(l = 0;l < k;l++){
                    if(text[j] == table[l])
                        total_cents += table_cent[l];
                }
            }
        }

        printf("%.2lf$\n",(double)total_cents/100.0);
    }

    return 0;
}

