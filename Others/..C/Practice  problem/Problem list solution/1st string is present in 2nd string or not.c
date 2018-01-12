#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50],str2[50];
    int len1,len2,i,j,k,ch = 0;

    gets(str1);
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    for(i = 0 ; i < len2 ; i++){

        k = i;

        for(j = 0 ; j < len1 ; j++){
            if(str1[j] == str2[k++])
                continue;
            else
                break;
        }

        if(j == len1){
            printf("Yes");
            ch = 1;
            break;
        }
    }

    if(ch != 1)
        printf("No");

    return 0;
}

