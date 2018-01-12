#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000],ckstr[100];
    int i,j,len1,len2,k;

    gets(str);
    gets(ckstr);

    len1 = strlen(str);
    len2 = strlen(ckstr);

    for(i = 0 ; i < len1 ; i++){
        k = i;
        for(j = 0 ; j < len2 ; j++){
            if(ckstr[j] == str[k++])
                continue;
            else
                break;
        }

        if( j == len2){
            printf("Yes");
            break;
        }


    }

    if(j != len2)
        printf("No");

    return 0;
}
