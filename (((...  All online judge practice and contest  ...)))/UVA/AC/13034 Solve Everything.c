    ///input:
/*
2
128 64 48 32 24 16 12 8 6 4 3 2 1
128 64 48 32 24 16 12 8 6 4 2 1 0
*/
#include <stdio.h>
int main()
{
    int problem_set[13],ck;
    int t,c = 1,i;
    scanf("%d",&t);
    while(t--)
    {
        ck = 0;
        for(i = 0;i < 13;i++){
            scanf("%d",&problem_set[i]);
            if(problem_set[i] == 0)
                ck = 1;
        }
        if(ck == 1)
            printf("Set #%d: No\n",c++);
        else
            printf("Set #%d: Yes\n",c++);
    }

    return 0;
}
