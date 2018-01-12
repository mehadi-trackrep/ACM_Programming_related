#include <stdio.h>
#include <string.h>
int main(){
    char str[100],ch;
    int len,r;

    scanf("%s",str);

    len = strlen(str);  ///AC

    if(len == 2){
        r = str[0] - '0';
        ch = str[1];
    }
    else if(len == 3){
        r = (str[0]-'0')*10 + (str[1]-'0');
        ch = str[2];
    }

    if(r >= 1 && r <= 2){
        if(ch == 'A' || ch == 'D')
            printf("window\n");
        else if(ch == 'B' || ch == 'C')
            printf("aisle\n");
    }
    else if(r >= 3 && r <= 20){
        if(ch == 'A' || ch == 'F')
            printf("window\n");
        else //if(ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E')
            printf("aisle\n");
    }

    else if(r > 20 && r <= 65){
        if(ch == 'A' || ch == 'K')
            printf("window\n");
        else if(ch == 'C' || ch == 'D' || ch == 'G' || ch == 'H')
            printf("aisle\n");
        else
            printf("neither\n");
    }

    return 0;
}
