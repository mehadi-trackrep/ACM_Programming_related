#include <stdio.h>
#include <string.h>
int main()
{
    char str1[32],str2[32],str3[32],str4[32],ch;
    int len1,len2,i,ck,a,b,pos;

    scanf("%s%s%c",str1,str2,&ch);

    /// length
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("=> Length of %s and %s are %d, %d\n",str1,str2,len1,len2);

    /// copy
    strcpy(str3,str1);
    strcpy(str4,str2);
    printf("==> str3 == %s\n",str3);
    printf("==> str4 == %s\n",str4);

    /// catenation
    strcat(str3,str4);
    printf("===> %s\n",str3);

    ///compare
    ck = strcmp(str1,str2);
    if(ck == 0)
        printf("====> Equal\n");
    else if(ck < 0)
        printf("====> %s less than %s\n",str1,str2);
    else
        printf("====> %s greater than %s\n",str1,str2);

    //sub-character occur/start position
    a = strchr(str1,ch);                    /// problem
    b = strchr(str2,ch);
    printf("=====> %c remain in %dth  and %dth position of %s and %s\n",ch,a,b,str1,str2);

    //sub-string occur position
    pos = strstr(str1,str2);        /// problem
    printf("======> %s occur in %s string at %dth position\n",str2,str1,pos);

    return 0;
}

