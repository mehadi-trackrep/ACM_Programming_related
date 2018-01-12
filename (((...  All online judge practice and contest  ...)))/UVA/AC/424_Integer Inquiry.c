
/// 123456789012345678901234567890

#include <stdio.h>
#include <string.h>
char str[1000],str_sum[1000],copy_str[1000],temp[1000];
void string_summation(int len);
int main()
{
    int len,i;

    strcpy(str_sum,"0");

    for(i = 1;i <= 100;i++){

        gets(str);

        if(strcmp(str,"0") == 0)
            break;

        len = strlen(str);   /// len means str er length

        string_summation(len);

    }

    printf("%s\n",str_sum);

    return 0;
}

void string_summation(int len)
{
    int i,j,c = 0,sum,sum_len,ck = 0,k;

    sum_len = strlen(str_sum);

    if(sum_len > len){
        len = len^sum_len;
        sum_len = len^sum_len;
        len = len^sum_len;

        strcpy(temp,str_sum);
        strcpy(str_sum,str);
        strcpy(str,temp);
    }

    if(len > sum_len){

        for(i = 0;i < len-sum_len;i++)
            copy_str[i] = '0';
        for(j = 0,k = i;j < sum_len;j++)
            copy_str[k++] = str_sum[j];
        copy_str[k] = '\0';
        strcpy(str_sum,copy_str);
    }

    for(i = len-1;i >= 0;i--){

        sum = ((int)str[i] - 48) + ((int)str_sum[i] - 48) + c;

        if(sum >= 10){
            copy_str[i+1] = (sum % 10) + 48;
            c = sum/10;
        }

        else{
            copy_str[i+1] = sum + 48;
            c = 0;
        }

    }

    if(sum >= 10){
        copy_str[0] = c + 48;
        ///copy_str[len+1] = '\0';
        ck = 1;
    }
    if(ck != 1){
        for(i = 0;i < len;i++)
            copy_str[i] = copy_str[i+1];
        copy_str[i] = '\0';
    }

    strcpy(str_sum,copy_str);
}
