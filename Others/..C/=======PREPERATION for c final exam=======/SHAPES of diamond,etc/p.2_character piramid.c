#include <stdio.h>
int main()
{
    char ch;
    int i,j,l;
    scanf("%c",&ch);
    if('ch' >= 97){
        i = 97;
        l = 122;
    }
    else{
        i = 65;
        l = 90;
    }
    for(;i <= l;i++){ //printf("%c\n",i);
        for(j = i;j >= 65;j--)
            printf("%c ",j);
        printf("\n");
    }
    return 0;
}

