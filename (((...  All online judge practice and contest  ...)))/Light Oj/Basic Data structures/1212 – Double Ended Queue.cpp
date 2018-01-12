#include <bits/stdc++.h>
using namespace std;
#define max 100
int n,m,x = 0,head = 0,tail = 0;
int queue[max];
void pushLeft(int a)
{
    if(x < n){
        if(head > 0){
            int p = queue[head-1];
            queue[head-1] = a;
            queue[head++] = p;
            x++;
        }
        else{
            queue[head++] = a;
            x++;
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
    }
    else
        printf("The queue is full\n");
}
int main()
{
    int t,num;
    char str[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        getchar();
        scanf("%s",str);
        scanf("%d",&num);
        if(strcmp(str,"pushLeft") == 0)
            pushLeft(num);
        if(strcmp(str,"pushRight") == 0)
            pushRight(num);
    }
    return 0;
}
