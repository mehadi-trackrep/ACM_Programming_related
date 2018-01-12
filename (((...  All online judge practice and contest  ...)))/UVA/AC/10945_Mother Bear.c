        /// input :
/*

Madam, Im adam!
Roma tibi subito motibus ibit amor.
Me so hungry!
Si nummi immunis
DONE

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[250],copy_str[200];
    int i,len,k,j,count;

    while(scanf("%[^\n]",str)){

        getchar();

        if(strcmp(str,"DONE") == 0)  /// AC
            break;

        len = strlen(str);
        k = 0;

        for(i = 0;i < len;i++){
            if( (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) ){
                if(str[i] >= 65 && str[i] <= 90)
                    copy_str[k++] = str[i] + 32;
                else
                    copy_str[k++] = str[i];
            }
        }

        copy_str[k] = '\0';
        count = 0;

        //puts(copy_str);
        //printf("%d\n",k);

        for(j=0;j<k/2;j++){

            if(copy_str[j] == copy_str[k-j-1]){
                count++;
                continue;
            }
            else
                break;
        }

        if(count == k/2)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");

    }

    return 0;
}
