#include <stdio.h>

void funct1(int u,int v);
void funct2(int *pu,int *pv);

int main()
{
    int u = 1,v = 3,c;
    //funct1(u,v);
    //printf("%d %d\n",u,v);

    funct2(&u,&v);
    printf("%d %d\n",u,v);

    return 0;
}

void funct1(int u,int v){

    u = 0;
    v = 0;
    printf("\nwithin funct1:u = %d,v = %d,  ",u,v);
    return;
}

void funct2(int *pu,int *pv){

    *pu = 0;
    *pv = 0;
    printf("\nwithin funct2:*pu = %d,*pv = %d , ",*pu,*pv);
    return;
}
