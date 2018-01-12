#include <stdio.h>
#define max 5
int queue[max],head = 0,tail = 0; /// QUEUE : FIRST IN , FIRST OUT

void enque(int data);
int deque();

int main()
{
    enque(1),enque(4),enque(5);
    int d = deque();

    printf("%d ",d);
    d = deque();
    printf("%d ",d);
    d = deque();
    printf("%d ",d);

    return 0;
}

void enque(int data)
{
    if(tail == max)
        printf("Overflow\n");
    else
        queue[tail++] = data;
}
int deque()
{
    if(head == tail){
        printf("Underflow\n");
        return -1;
    }
    return queue[head++];
}
