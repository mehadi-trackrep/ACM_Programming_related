#include <stdio.h>
#include <string.h>
int main()
{
    char ara[5][20],temp[20];
    int len1,len2;
    int n,i,j;

    scanf("%d",&n);
    getchar();

    for(i=0;i<n;i++){
        scanf("%s",ara[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if( strcmp(ara[i],ara[j]) > 0 ){
                strcpy(temp,ara[i]);
                strcpy(ara[i],ara[j]);
                strcpy(ara[j],temp);
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%s\t",ara[i]);
    }

    return 0;
}
