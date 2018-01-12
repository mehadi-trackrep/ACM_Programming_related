        /// input:
/*
atgc
cggta

sdvavasd
asvdjvh
*/
#include <stdio.h>
#include <string.h> /// problem for input neoar khettere ...
int main()
{
    char str1[305],str2[305],total_sub_str[3000][305],copy_str[305],total_sub_str1[3000][305];
    int i,j,k,len1,len2,index1 = 0,index2,ck1,ck2 = 0,max_count = 0,count = 0;
    int len;
    while(scanf("%s%s",str1,str2) == 2){
        memset(total_sub_str,'\0',sizeof(total_sub_str));
        memset(total_sub_str1,'\0',sizeof(total_sub_str1));
        len1 = strlen(str1);
        len2 = strlen(str2);    /// len1 >= len2 dhore
        if(len2 > len1){
            len1 = len1^len2;
            len2 = len1^len2;
            len1 = len1^len2;
            strcpy(copy_str,str1);
            strcpy(str1,str2);
            strcpy(str2,copy_str);
        }
        j = 0;
        max_count = 0;
        while(j < len2){
            k = j;
            if(ck2 == 1)
                index1++;
            count = 0;
            ck2 = 0;
            for(i = 0;i < len1;i++){
                index2 = 0;
                ck1 = 0;
                if(str2[k] == str1[i]){
                    while((str2[k] == str1[i]) && (k < len2)){
                        total_sub_str[index1][index2++] = str2[k];
                        //printf("%c",str2[k]);
                        k++;
                        i++;
                        count++;
                        ck1 = 1;
                        ck2 = 1;
                    }
                    if(count > max_count)
                        max_count = count;
                }
                //printf("\n");
                k = 0;
                /*if(ck1 == 1){
                    total_sub_str[index1][index2] = '\0';
                    break;
                }*/
            }
            j++;
        }

        //printf("%d",max_count);
        //printf("%d",count);

        if(max_count == 0){
            printf("No common sequence.\n");
            continue;
        }
        k = 0;
        for(i = 0;i <= index1;i++){
            len = strlen(total_sub_str[i]);
            if(len == max_count)
                //puts(total_sub_str[i]);
                strcpy(total_sub_str1[k++],total_sub_str[i]);
        }

        for(i = 0;i <= k;i++){
            for(j = i+1;j <= k;j++){
                if(strcmp(total_sub_str1[i],total_sub_str1[j]) > 0){
                    strcpy(copy_str,total_sub_str1[i]);
                    strcpy(total_sub_str1[i],total_sub_str1[j]);
                    strcpy(total_sub_str1[j],copy_str);
                }
                if(strcmp(total_sub_str1[i],total_sub_str1[j]) == 0)
                    strcpy(total_sub_str1[j],"\0");
            }
        }
        for(i = 0;i <= k;i++){
            len = strlen(total_sub_str1[i]);
            if(len == max_count)
                puts(total_sub_str1[i]);
        }
    }

    return 0;
}
