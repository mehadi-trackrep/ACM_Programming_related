/*
[[mehadi]]hasan[[[uzzal]]]     output : uzzalmehadihasan
[[mehadi ]]hasan [[[uzzal]]]   output : mehadi
                                        hasan
                                        uzzal
[bcdef[pppp][iiii][            output : iiiippppbcdef
[bcdef[pppp][iiii]]            output : iiiippppbcdef
[][][][][][][][][][][][m]p     output : mp
[][][][][][][][][][][]         output : nothing

*/

/*

[x]
x
[bjhbh[
[bjhbh[pppp][iiiii]]
[][][][][][][][][][][][m]p
[[mehadi ]]hasan [[[uzzal]]]
[hasan[sdvj][m]][p

*/

#include <stdio.h>
#include <string.h>
char line[100005],cpy_str[100005],multi_str[10000][10000],copy_str[10000][10000]; /// RE khaici
int main()
{
    long int i,k1,k2,len,index;
    long int open,close;

    while(scanf("%s",line) == 1){

        len = strlen(line);

        k1 = 0;
        k2 = 0;

        for(i = 0;i < len;i++){

            index = 0;

            if(line[i] == '[' && line[i+1] != '[' && line[i+1] != ']'){

                while(1){

                    if(line[i+1] == ']' || line[i+1] == '\0'){
                        open = 0;
                        close = 1;
                        break;
                    }
                    if(line[i+1] == '[' || line[i+1] == '\0'){
                        open = 1;
                        close = 0;
                        break;
                    }

                    cpy_str[index++] = line[i+1];

                    i++;
                }

                cpy_str[index] = '\0';

                if(close == 1){
                    strcpy(multi_str[k1],cpy_str);
                    k1++;
                    continue;
                }

                if(open == 1){
                    strcpy(copy_str[k2],cpy_str);
                    k2++;
                }
            }

            else if( (line[i] >= 65 && line[i+1] <= 90) || (line[i] >= 90 && line[i] <= 122) ){

                while(1){
                    if(line[i] == '[' || line[i] == '\0')
                        break;
                    if(line[i] == ']' || line[i] == '\0')
                        break;
                    cpy_str[index++] = line[i];

                    i++;
                }

                cpy_str[index] = '\0';

                strcpy(copy_str[k2],cpy_str);

                k2++;
            }

        }

        // /*


        if(k1 >= 1){
            for(i = k1-1;i >= 0;i--)
                printf("%s",multi_str[i]);
        }

        for(i = 0;i < k2;i++)
            printf("%s",copy_str[i]);

        printf("\n");

       //  */
    }

    return 0;
}
