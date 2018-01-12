
int f(int ); /// ekhane just data type likhlei hoy
int main()
{
    printf("%d\n",f(7));

    return 0;
}

int f(int x)
{
    if(x <= 4)
        return x;
   // else return f(--x);
    return f(--x);
}
