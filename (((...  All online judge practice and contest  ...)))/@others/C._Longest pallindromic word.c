#include <stdio.h>
#include <string.h>
int main()
{
    char str[1005],copy_str[1005][1005];
    int t,n,len,i,x,k1,k2,ck,j;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        len = strlen(str);
        ck = 0;
        for(i = 0;i < len/2;i++){
            if(str[i] == str[len-i-1])
                continue;
            else{
                ck = 1;
                break;
            }
        }
        if(ck == 0){
            printf("%d\n",len);
            continue;
        }

        n = len;

        while(n--){
            k1 = 0;
            for(i = 0;i <= len-n;i++){
                x = i;
                k2 = 0;
                while(x < i+n){
                    copy_str[k1][k2++] = str[x];
                    x++;
                }
                ck = 0;
                for(j = 0;j < k2/2;j++){
                    if(copy_str[k1][j] == copy_str[k1][k2-j-1])
                        continue;
                    else{
                        ck = 1;
                        break;
                    }
                }
                if(ck == 0)
                    break;
                k1++;
            }
            if(ck == 0){
                printf("%d\n",k2);
                break;
            }
        }
    }

    return 0;
}
