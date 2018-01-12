#include <stdio.h>
#include <string.h>
int main()
{
    char name[32],str[100],grad[10][5],sub[10][5];
    gets(str);
    int len = strlen(str);
    printf("%d\n",len);
    int i,j,k;
    for(i = 0,j = 0;i < len;i++){
        while(str[i] != ',' && str[i] != '\0'){
            if(str[i] == '-'){
                i++;
                k = 0;
                while(str[i] != ',' && str[i] != '\0'){
                    grad[j][k++] = str[i];
                    i++;
                }
                grad[j][k] = '\0';
            }
            else{
                k = 0;
                while(str[i] != '-'){
                    sub[j][k++] = str[i];
                    i++;
                }
                sub[j][k] = '\0';
            }
        }

        j++;
    }

    for(i = 0;i < j;i++){
        printf("%s %s .\n",sub[i],grad[i]);
    }

    return 0;
}

/*

BAN-A+,ENG-A,MAT-A+

*/
