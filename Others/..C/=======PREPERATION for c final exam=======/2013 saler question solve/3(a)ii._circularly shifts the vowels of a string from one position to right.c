#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],temp,temp1;
    int ara[20],i,j,k,len,count = 0;

    gets(str);

    len = strlen(str);

    for(i = 0,j = 0;i < len;i++){

        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' ||
            str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U' ) {

            ara[j] = i;
            count++;
            j++;
        }
    }


   /* for(j = 0;j < count;j++)
        printf("%d ",ara[j]);*/

    temp = str[ara[1]];
    str[ara[1]] = str[ara[0]];

    for(j = 2;j < count;j++){
        temp1 = str[ara[j]];
        str[ara[j]] = temp;
        temp = temp1;
    }

    str[ara[0]] = temp;

    puts(str);


    return 0;
}

