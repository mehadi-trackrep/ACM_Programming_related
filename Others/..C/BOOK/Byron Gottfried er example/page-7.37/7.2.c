void swap(int *x,int *y);
int main()
{
    int x = 20,y = 10;
    swap(&x,&y); /// pass by address
    printf("x = %d,y = %d",x,y);

}

void swap(int *x,int *y)
{
    int temp;

    temp = *x;
    *x = *y;   /// address swap
    *y = temp;
}
