#include <stdio.h>
#include <string.h>
int main()
{
    FILE *pf1,*pf2;

    char str[100];
    int i,len,vowel = 0;

    pf1 = fopen("first.txt","r");
    pf2 = fopen("second.txt","w");

    //fscanf(pf1,"%s",str);
    fscanf(pf1,"%s",str);

    len = strlen(str);

    for(i = 0;i < len;i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' ||
           str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            vowel++;
    }

    fprintf(pf2,"The number of vowel = %d",vowel);

    fclose(pf1);
    fclose(pf2);

    return 0;
}

