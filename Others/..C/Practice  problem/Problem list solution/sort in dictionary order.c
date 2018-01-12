#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,len,j;
    scanf("%d",&n);
    getchar();
    char str[n][20],temp[20];

    for(i = 0 ; i < n ; i++){
        gets(str[i]);
        for(j = i ; j > 0 ; j--){
            if(strcmp(str[j-1],str[j]) > 0){
                strcpy(temp,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],temp);
            }
        }

    }

    printf("\n");

    for(i = 0 ; i < n ; i++){
        puts(str[i]);
        printf("\n");
    }

    return 0;
}

