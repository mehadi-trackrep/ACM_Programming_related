#include <stdio.h>
#include <string.h>
int main()
{
    char ara[100];
    gets(ara);
    int i,len;
    int vowel = 0,consonant = 0,digit = 0;
    len = strlen(ara);
    for(i=0;i<len;i++){
       /// if(ara[i]-48>=0  ara[i]-48<=9)
          ///      digit++;
         ///   else consonant++;

        if(ara[i]=='A' || ara[i]=='E' || ara[i]=='I' || ara[i]=='O' || ara[i]=='U' || ara[i]=='a' || ara[i]=='e' ||
        ara[i]=='i' || ara[i]=='o' || ara[i]=='u' ){
            vowel++;
            continue;
        }
        else if(ara[i]-48==0 || ara[i]-48==1 || ara[i]-48==2 || ara[i]-48==3 || ara[i]-48==4 || ara[i]-48==5 || ara[i]-48==6 ||
                ara[i]-48==7 || ara[i]=='8' || ara[i]-48==9 )digit++;
        else consonant++;

    }
    printf("Vowels = %.2lf%%\n",(double)(100/len)*vowel);
    printf("Consonants = %.2lf%%\n",(double)(100/len)*consonant);
    printf("Digits = %.2lf%%\n",(double)(100/len)*digit);

    return 0;
}

