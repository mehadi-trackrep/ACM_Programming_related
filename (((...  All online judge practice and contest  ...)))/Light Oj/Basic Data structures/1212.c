#include <stdio.h>
#include <string.h>
#define max 100
int n,m,x = 0,head = 0,tail = 0,ck1;
int queue[max];
void pushLeft(int a)
{
    if(x < n){
        if(head > 0){
            int ck = x;
            while(ck > 0){
                //int p = queue[head-1];
                queue[ck] = queue[ck-1];
                ck--;
            }
            queue[0] = a;
            x++;
            head++;
            //printf("Left...head > 0\n");
        }
        else{
            queue[head++] = a;
            x++;
            //printf("Left...head == 0\n");
        }
    }
    else
        printf("The queue is full\n");
}
void pushRight(int a)
{
    if(x < n){
        queue[head++] = a;
        x++;
        //printf("Right\n");
    }
    else
        printf("The queue is full\n");
}
int popLeft(int a)
{
    int ck = queue[0],i = 0;
    if(x < 0){
        //printf("The queue is empty\n");
        ck1 = 1;
        return 1;
    }
    while(i <= x){
        queue[i] = queue[++i];
    }
    x--;
    head--;
    return ck;
}
int popRight(int a)
{
    int ck = queue[x];
    if(x < 0){
        ck1 = 1;
        return 1;
    }
    x--;
    head--;
    return ck;
}
int main()
{
    int t,num;
    char str[10];
    scanf("%d",&t);
    int i;
    while(t--)
    {
        scanf("%d%d",&n,&m);
        //getchar();
        while(m--){
            scanf("%s",str);
            if(strcmp(str,"pushLeft") == 0 || strcmp(str,"pushRight") == 0)
                scanf("%d",&num);
            if(strcmp(str,"pushLeft") == 0)
                pushLeft(num);
            if(strcmp(str,"pushRight") == 0)
                pushRight(num);
            if(strcmp(str,"popLeft") == 0){
                ck1 = 0;
                int a = popLeft(num);
                if(ck1 == 1)
                    printf("The queue is empty\n");
                else
                    printf("The popped number is %d.\n",a);
            }
            if(strcmp(str,"popRight") == 0){
                ck1 = 0;
                int a = popRight(num);
                if(ck1 == 1)
                    printf("The queue is empty\n");
                else
                    printf("The popped number is %d.\n",a);
            }
        }
    }
    for(i = 0;i < head;i++)
        printf("%d ",queue[i]);

    return 0;
}

/*

1
5 10
pushLeft 1
pushLeft 2
pushLeft 3
pushLeft 4
popLeft
popLeft
popRight
pushRight 5
pushRight 6
pushRight 7

*/
