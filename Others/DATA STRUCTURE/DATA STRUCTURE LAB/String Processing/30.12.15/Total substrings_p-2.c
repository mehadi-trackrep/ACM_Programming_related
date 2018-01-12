        ///INPUT; H4XOR
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int n,len,i,x;
    scanf("%s",str);
    len = strlen(str);
    n = 1;
    while(n <= len){
        for(i = 0;i <= len-n;i++){ /// actually len-n porjonto loop cholbe...
            x = i;
            while(x < i+n){
                printf("%c",str[x]);
                x++;
            }
            if(n < len)
                printf(",");
        }
        n++;
    }
    return 0;
}

