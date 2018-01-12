#include <stdio.h>
#include <string.h>
int main()
{
    char song[16][10] ={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia",
                  "Happy","birthday","to","you"};
    char name[100][105];

    int n,i,j,k;

    scanf("%d",&n);
    //getchar();
    for(i = 0;i < n;i++)
        scanf("%s",name[i]);
    if(n <= 0){
        for(j = 0;j < 16;j++)
            printf(": %s\n",song[j]);
    }
    else if(n <= 16){
        i = 0;
        while(i < 16){
            for(j = 0;j < n && i < 16;j++)
                printf("%s: %s\n",name[j],song[i++]);
        }
    }

    else{
        i = 0;
        k = 0;
        while(i < n ){
            for(j = 0;j < 16 ;j++){
                if(k == n)
                    k = 0;
                printf("%s: %s\n",name[k++],song[j]);
                i++;
            }
        }
    }

    return 0;
}
