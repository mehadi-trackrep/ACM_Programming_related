   /// input

/*
When riding your bicycle backwards down a one-way street, if the
wheel falls of a canoe, how many ball bearings does it take to fill
up a water buffalo?
Hello Howard.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char line[100000],letter[100000],alpha[1000],min_letter;
    char temp,lower[100],upper[100];
    int i,j,k,len,ck,count,max_count,index;
    int check[100000],freq[100000],l,u;

    while(gets(line)){

        len = strlen(line);

        for(j = 0;j < len;j++)
            check[j] = 0;
        max_count = 0;
        index = 0;
        for(j = 0;j < len;j++){
            if( (line[j] >= 65 && line[j] <= 90) || (line[j] >= 97 && line[j] <= 122) ){
                ck = 0;
                count = 1;

                for(k = j+1;k < len;k++){

                    if(line[j] == line[k]){
                        if(check[j] == 1)
                            break;
                        else{
                            count++;
                            check[k] = 1;
                            ck = 1;
                        }
                    }
                }

                //if(check[j] != 1)
                    //printf("%c -> %d\n",line[j],count);
                if(check[j] != 1){
                    letter[index] = (int)line[j];
                    freq[index] = count;
                    if(count > max_count)
                        max_count = count;
                    index++;
                }

            }
        }
        l = 0;
        u = 0;
        for(i = 0;i < index;i++){
            if(freq[i] == max_count){
                if((int)letter[i] >= 65 && (int)letter[i] <= 90)
                    upper[u++] = letter[i];
                else
                    lower[l++] = letter[i];
            }
        }
        /*for(i = 0;i < u;i++)
            printf("%c ",upper[i]);
        for(i = 0;i < l;i++)
            printf("%c ",lower[i]);*/
        for(i = 0;i < u;i++){
            for(j = i+1;j < u;j++){
                if(upper[i] > upper[j]){
                    temp = upper[i];
                    upper[i] = upper[j];
                    upper[j] = temp;
                }
            }
        }
        for(i = 0;i < l;i++){
            for(j = i+1;j < l;j++){
                if(lower[i] > lower[j]){
                    temp = lower[i];
                    lower[i] = lower[j];
                    lower[j] = temp;
                }
            }
        }
        for(i = 0;i < u;i++)
            printf("%c",upper[i]);
        for(i = 0;i < l;i++)
            printf("%c",lower[i]);
        printf(" %d\n",max_count);

    }

    return 0;
}
