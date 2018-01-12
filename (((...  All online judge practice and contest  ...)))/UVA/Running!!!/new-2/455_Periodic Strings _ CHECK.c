#include <stdio.h>
#include <string.h>
char str[100],copy_str1[100],copy_str2[100];
int main()
{
    int i,j,k1,k2,len,x,ck1,ck2,count,t;

    scanf("%d",&t);
    getchar();

    while(t--){

        scanf("%s",str);

        memset(copy_str1,'\0',sizeof(copy_str1));
        memset(copy_str2,'\0',sizeof(copy_str2));

        count = 1;
        ck1 = 0;
        ck2 = 0;
        k1 = 1;
        len = strlen(str);

        copy_str1[0] = str[0];
        copy_str2[0] = str[0];

        for(i = 1;i < len;i++)
        {
            if(str[i] == ' '){
                count = 1;
                break;
            }
            copy_str2[i] = str[i];

            k2 = 0;
            j = i;

            while(str[j] == copy_str1[k2] && k2 < k1){
                j++;
                k2++;
            }

            if(k2 == k1){
                ck1 = 0;
                x = i+1;
                while(x <= j){
                    copy_str2[x] = str[x];
                    x++;
                }
                i = j-1;
            }

            if(k2 != k1){
                ck1 = 1;
                ck2 = 1;
                k1 = i+1;
                copy_str2[i+1] = '\0';
                strcpy(copy_str1,copy_str2);
            }

            if(ck1 == 0)
                count++;
            if(ck1 == 1)
                count = 1;
        }

        if(ck2 == 0)
            copy_str1[1] = '\0';

        len = strlen(copy_str1);



        printf("%s%d\n\n",copy_str1,len);
    }

    return 0;
}
