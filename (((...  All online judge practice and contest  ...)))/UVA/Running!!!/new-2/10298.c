#include <stdio.h>
#include <string.h>
char str[5000000],copy_str1[5000000],copy_str2[5000000];
int main()
{
    int i,j,k1,k2,len,x,ck,count;

    while(gets(str)){

        count = 1;
        ck = 0;
        k1 = 1;
        len = strlen(str);

        copy_str1[0] = str[0];
        copy_str2[0] = str[0];

        for(i = 1;i < len;i++)
        {
            if(str[i] == ' ')
                break;
            copy_str2[i] = str[i];

            k2 = 0;
            j = i;

            while(str[j] == copy_str1[k2] && k2 < k1){
                j++;
                k2++;
            }

            if(k2 == k1){
                ck = 0;
                x = i+1;
                while(x <= j){
                    copy_str2[x] = str[x];
                    x++;
                }
                i = j-1;
            }

            if(k2 != k1){
                ck = 1;
                k1 = i+1;
                copy_str2[i+1] = '\0';
                strcpy(copy_str1,copy_str2);
            }

            if(ck == 0)
                count++;
            if(ck == 1)
                count = 1;
        }

        if(ck == 0)
            copy_str1[1] = '\0';

        printf("%d\n",count);
    }

    return 0;
}


