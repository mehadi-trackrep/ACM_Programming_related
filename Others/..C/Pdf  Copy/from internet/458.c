#include<stdio.h>
static char t[1024];
int main(){
    register unsigned i;
    while(gets(t)){
        for(i = 0; t[i] != '\0'; ++i)
            t[i] -= 7;
        puts(t);
    }

    return 0;
}
