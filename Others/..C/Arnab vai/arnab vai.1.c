//#include<bits/stdc++.h>
//using namespace std;
#include <stdio.h>
#include <string.h>

char ara[100];

void str_rev(char ch,int p)
{
    //printf("==>");
    if(ch =='\0') return;
    str_rev(ara[p+1],p+1);
    printf("%c",ara[p]);
}

int main()
{
   // int i,l;
    while(gets(ara)){
        str_rev(ara[0],0);
        printf("\n");
    }
    return 0;
}
