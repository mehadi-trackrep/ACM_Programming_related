#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,save;
    int n;
    while(scanf("%c",&ch) == 1)
    {
        if((ch=='a'|| ch=='A'||ch=='e'|| ch=='E'||ch=='i'|| ch=='I'||ch=='u'|| ch=='U'||ch=='o'|| ch=='O'))
        {
            printf("%c",ch);

            while(scanf("%c",&ch) == 1 && ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ))
                printf("%c",ch);

            printf("ay%c",ch);
        }

        else if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
        {
              save = ch;

              while(scanf("%c",&ch) == 1 && (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
                printf("%c",ch);

              printf("%cay%c",save,ch);
        }

        else
          printf("%c",ch);
    }

    return 0;
}
