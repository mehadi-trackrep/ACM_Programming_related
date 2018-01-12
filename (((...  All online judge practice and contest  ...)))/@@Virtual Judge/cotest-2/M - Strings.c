#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    int len,i,j,AB = 0,BA = 0,ck1 = 0,ck2 = 0;
    int index1 = 0,index2 = 0,index3 = 0,index4 = 0,ck = 0; /// PROBLEM
    gets(str);

    len = strlen(str);

    for(i = 0;i < len;i++){
        if(str[i] == 'A'){
            index1 = i;
            if(++i < len && str[i] == 'B'){
                AB == 1;
                index2 = i;
            }
        }
        if(str[i] == 'B'){
            index3 = i;
            if(++i < len && str[i] == 'A'){
                BA = 1;
                index4 = i;
            }
        }
        if(ck1 != 1){
            if( (i > index1) &&
               (i > index2) &&  (i!= index3) &&  (i!= index4) ){
                if(str[i] == 'A'){
                    if(++i < len && (i > index1) && (i!= index2) &&  (i!= index3) &&  (i!= index4)
                       && str[i] == 'B')
                        ck1 == 1;
                }
            }
        }

        if(ck2 != 1){
            if( (i > index1) &&
               (i > index2) &&  (i > index3 || i < index3) && i != index4 ){
                if(str[i] == 'B'){
                    if( ++i < len && (i > index1) && (i > index2) &&
                       (i!= index3) &&  (i!= index4)
                       && str[i] == 'A' )
                        ck2 == 1;
                }
            }
        }

        if( (AB == 1 && ck2 == 1) || (BA == 1 && ck1 == 1) || (ck1 == 1 && ck2 == 1) ){
            ck = 1;
            break;
        }
    }

    if(ck == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

