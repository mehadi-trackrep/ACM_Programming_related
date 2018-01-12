#include <stdio.h>
int main()
{
    char name[5][32];
    int i;
    for(i=0;i<5;i++)
        ///gets(name[i]); or , scanf("%[^\n]",name[i]);
        scanf("%s",name[i]);
     for(i=0;i<5;i++)
        puts(name[i]);

    return 0;
}
