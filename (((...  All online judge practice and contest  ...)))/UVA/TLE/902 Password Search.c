///INPUT; H4XOR
#include <stdio.h>
#include <string.h>
char str[100000],copy_str[100000][10000],pass[100000];
int main()
{
    int check[100000],count,max_count;  /// TLE
    int n,len,i,x,k1,k2,j;

    while(scanf("%d",&n) == 1)
    {

        getchar();
        scanf("%s",str);
        len = strlen(str);
        k1 = 0;
        for(i = 0; i <= len-n; i++)
        {
            x = i;
            k2 = 0;
            while(x < i+n)
            {
                copy_str[k1][k2++] = str[x];
                x++;
            }
            copy_str[k1][k2] = '\0';
            k1++;
        }

        /*for(i = 0;i < k1;i++)
            puts(copy_str[i]);*/

        memset(check,0,sizeof(check));
        max_count = 0;

        for(i = 0;i < k1;i++){
            if(check[i] == 1)
                continue;
            count = 1;

            for(j = i+1;j < k1;j++){
                if(strcmp(copy_str[i],copy_str[j]) == 0){
                    check[j] = 1;
                    count++;
                }
            }

            if(count > max_count){
                max_count = count;
                strcpy(pass,copy_str[i]);
            }
        }

        puts(pass);
    }

    return 0;
}

