#include <stdio.h>
#include <string.h>
int main(){

    char name[30],ch;
    int i,len,j,k;

    while(scanf("%s",name) == 1){

        len = strlen(name);

        for(i = 0;i < len;i++){

            if(name[i] == 'B' || name[i] == 'F' || name[i] == 'P' || name[i] == 'V'){

                if(name[i-1] !='B' && name[i-1] != 'F' && name[i-1] != 'P' && name[i-1] != 'V'){
                    printf("1");
                    continue;
                }
            }

            else if(name[i] == 'C' || name[i] == 'G' || name[i] == 'J' || name[i] == 'K' || name[i] == 'Q'
                    || name[i] == 'S' || name[i] == 'X' || name[i] == 'Z'){

                if(name[i-1] != 'C' && name[i-1] != 'G' && name[i-1] != 'J' && name[i-1] != 'K' && name[i-1] != 'Q'
                    && name[i-1] != 'S' && name[i-1] != 'X' && name[i-1] != 'Z'){
                    printf("2");
                    continue;
                }
            }

            else if(name[i] == 'D' || name[i] == 'T'){

                if(name[i-1] != 'D' && name[i-1] != 'T'){
                    printf("3");
                    continue;
                }
            }

            else if(name[i] == 'L'){

                if(name[i-1] != 'L'){
                    printf("4");
                    continue;
                }
            }

            else if(name[i] == 'M' || name[i] == 'N'){

                if(name[i-1] != 'M' && name[i-1] != 'N'){
                    printf("5");
                    continue;
                }
            }

            else if(name[i] == 'R'){

                if(name[i-1] != 'R'){
                    printf("6");
                    continue;
                }
            }
        }

        printf("\n");
    }

    return 0;
}
