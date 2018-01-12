#include <stdio.h>
struct customer{

    char name[32];
    int accno,balance;

}x[5];

int main()
{
    int i;

    for(i = 0;i < 5;i++){
        scanf("%[^\n]%d%d",&x[i].name,&x[i].accno,&x[i].balance);
        getchar();
    }

    for(i = 0;i < 5;i++){
        if(x[i].balance > 100000){
            printf("%s\t%d %d\n",x[i].name,x[i].accno,x[i].balance);
        }
    }

    return 0;
}
