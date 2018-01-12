#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int R,C;            /// R = Row and C = Column
    scanf("%d%d",&R,&C);
    getchar();
    char ara[R][C]; /// C = len+1, ortho len ta char and 1ta null char mile ekta string ///
    int i;
    for(i=0;i<R;i++)
        gets(ara[i]);
     for(i=0;i<R;i++){
        printf("%s\n",ara[i]);
        //printf("\n");
     }


    return 0;
}

