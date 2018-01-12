#include <stdio.h>
#define max 5

int sz = 0;
int queue[max],head = 0,tail = 0;

void enque(int data);
int deque();

int main()
{
    int d;
    enque(1),enque(4),enque(5);
    d = deque();
    printf("%d ",d);
    enque(2),enque(3),enque(7);

    d = deque();

    printf("%d ",d);
    d = deque();
    printf("%d ",d);
    d = deque();
    printf("%d ",d);

    return 0;
}
void enque(int data)
{
    if(sz == max)
        printf("Overflow\n");
    else{
        queue[tail++] = data;
        sz++;
        if(tail == max)
            tail = 0;
    }
}
int deque()
{
    if(sz == 0){
        printf("Underflow\n");
        return -1;
    }
    if(head == max)
        head = 0;
    sz--;
    return queue[head++];
}
