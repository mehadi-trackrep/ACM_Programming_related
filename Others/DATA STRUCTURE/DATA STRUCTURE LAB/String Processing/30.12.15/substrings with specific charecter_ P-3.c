        ///INPUT; H4XOR
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000],copy_str[1000],ch;
    int n,len,i,x,ck,k;
    scanf("%s",str);
    getchar();
    scanf("%c",&ch);
    len = strlen(str);
    n = 1;
    while(n <= len){
        for(i = 0;i <= len-n;i++){ /// actually len-n porjonto loop cholbe...
            x = i;
            ck = 0;
            k = 0;
            while(x < i+n){
                if(str[x] == ch)
                    ck = 1;
                copy_str[k++] = str[x];
                x++;
            }
            if(n < len && ck == 1){
                copy_str[k] = '\0';
                printf("%s",copy_str);
                printf(",");
            }
        }
        n++;
    }
    return 0;
}


