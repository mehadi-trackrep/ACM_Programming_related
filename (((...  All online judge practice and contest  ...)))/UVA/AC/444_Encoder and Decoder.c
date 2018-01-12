#include <stdio.h>
#include <string.h>
int main()
{
    char line[260];
    int i,len,num,ch,sum,x;

    while(gets(line)){

        len = strlen(line);

        num = 0;
        ch = 0;

        if(line[0] == '0' || line[0] == '1' || line[0] == '2' || line[0] == '3' || line[0] == '4' || line[0] == '5' ||
           line[0] == '6' || line[0] == '7' || line[0] == '8' || line[0] == '9')
            num = 1;
        else
            ch = 1;

        if(num == 1){

            for(i = len-1 ;i >= 1;i--){

                sum = ((int)line[i]-48)*10 + (int)line[i-1]-48;
                if( (sum >= 65 && sum <= 90) || sum == 97 || sum == 98 || sum == 99 || sum == 32 || sum == 33 ||
                     sum == 44 || sum == 46 || sum == 58 || sum == 59 || sum == 63 ){
                    i = i-1;
                    printf("%c",sum);
                }
                else {
                    if(i-2 < 0)
                        break;
                    sum = ((int)line[i]-48)*100 + ((int)line[i-1]-48)*10 + (int)line[i-2]-48;
                    i = i-2;
                    printf("%c",sum);
                }

                //printf("==> %d ",sum);
            }

            printf("\n");
        }

        else{

            for(i = len-1; i >= 0;i--){

                sum = (int)line[i];

                while(sum != 0){
                    x = sum % 10;
                    printf("%d",x);
                    sum /= 10;
                }
            }

            printf("\n");
        }
    }

    return 0;
}

///  72 97 118 101 32 97 32 78 105 99 101 32 68 97 121 32 33
/// sample input :-  332312179862310199501872379231018117927
