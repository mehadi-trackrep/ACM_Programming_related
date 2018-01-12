#include <stdio.h>
#include <string.h>   /// function use ///
int strcompare(char str1[],char str2[]){

    int i,len,len1,len2;

    len1 = strlen(str1);
    len2 = strlen(str2);

    len = (len1 > len2) ? len2 : len1;

    for(i = 0 ; i <= len ; i++){
        if(str1[i] < str2[i])
            return -1;
        else return 1;

        return 0;
    }

}

main(){

    int status;
    char str1[100],str2[100];

    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);

    status = strcompare(str1,str2);

    if(status == -1)
        printf("The first string is less than second string\n");
    else if(status == 1)
        printf("The first string is greater than second string\n");
    else
        printf("Both strings are equal\n");

}
