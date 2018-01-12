#include <stdio.h>
#define max 5

int stack[max],top = 0; /// STACK : FIRST IN , LAST OUT
void push(int data);
int pop();

int main()
{
    int i,data;
    for(i = 1;i < max+5;i++){
        push(i);
    }
    for(i = 1;i < max+10;i++){
        data = pop();
        printf("%d\n",data);
    }
    return 0;
}

void push(int data)
{
    if(top >= max)
        printf("Overflow\n");
    stack[top++] = data;
}

int pop()
{
    if(top < 0){
        printf("Underflow\n");
        return -1;
    }
    return stack[--top];
}
