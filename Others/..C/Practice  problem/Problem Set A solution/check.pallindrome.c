#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    int i,n,len,c = 1,j,count = 0;

    scanf("%d",&n);

    char ara[MAX][100];

    //getchar();

    for(i=0;i<n;i++){

        gets(ara[i]);
        len = strlen(ara[i]);  ///  printf("%d\n",len);

        for(j=0;j<len/2;j++){

            if(ara[i][j] == ara[i][len-j-1]){ // || ara[i][j] == ara[i][len-j-1]-32){
                count++;
                continue;
            }

        }
         if(count == len/2)
                printf("Case %d: Yes\n",c++);
         else
                printf("Case %d: No\n",c++);

         count = 0;
    }



    return 0;
}

