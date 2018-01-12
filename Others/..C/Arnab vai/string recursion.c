#include <stdio.h>
#include <string.h>

char str[100];

void str_rev(char ch,int p){

    if(ch == '\0')
        return;
    str_rev(str[p+1],p+1);

    printf("%c",str[p]);

}
//void str_rev(char *str,int p);
int main(){

    //gets(str);
    //str_rev(str[0],0);

    while(gets(str)){
        str_rev(str[0],0);
        printf("\n");
    }

    return 0;
}
