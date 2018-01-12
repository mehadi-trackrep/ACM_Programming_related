#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10000],str2[10000];
    int len1,len2,i,j,k,count,max_count;
    while(gets(str1) && gets(str2)){
        len1 = strlen(str1);
        len2 = strlen(str2);
        max_count = 0;
        for(i = 0;i < len1;i++){ /// problem
            count = 0;
            k = i;
            for(j = 0;j < len2;j++){
                while(str1[k++] == str2[j])
                    count++;
            }
            if(count > max_count)
                max_count = count;
        }
        printf("%d\n",max_count);
    }
    return 0;
}
