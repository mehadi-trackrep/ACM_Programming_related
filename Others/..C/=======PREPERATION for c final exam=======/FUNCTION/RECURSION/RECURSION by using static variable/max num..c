#include <stdio.h>
#define MAX 100
int ara[MAX];
int maximum(int size){

    static int i = 0,max = -9999; /// static variable er value only 1st bar use hoy

    if(i < size){
        if(max < ara[i])
            max = ara[i];
    }

    else
        return max;

    i++;

    maximum(size);

}
int main()
{
    int i,size;
    scanf("%d",&size);

    for(i = 0;i < size;i++)
        scanf("%d",&ara[i]);

    printf("%d",maximum(size));

    return 0;
}


