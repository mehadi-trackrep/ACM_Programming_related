#include <stdio.h>
#include <string.h>
int main()
{
    char str1[25],str2[25];
    int t,i,j,len1,len2,ck;

    while(scanf("%d",&t) == 1){

        for(i = 0; i < t; i++){

            scanf("%s%s",str1,str2);
            len1 = strlen(str1);
            len2 = strlen(str2);

            if(len1 != len2){
                printf("No\n");
                continue;
            }

            ck = 1;

            for(j = 0; j < len1; j++){

                if( (str1[j] != str2[j]) ){

                    if( (str1[j] == 'a' || str1[j] == 'e' || str1[j] == 'i' || str1[j] == 'o' || str1[j] == 'u') &&
                        (str2[j] == 'a' || str2[j] == 'e' || str2[j] == 'i' || str2[j] == 'o' || str2[j] == 'u') )
                        ck = 1;
                    else{
                        printf("No\n");
                        ck = 0;
                        break;
                    }
                }

            }

            if(ck == 1)
                printf("Yes\n");
        }
    }
    return 0;
}

