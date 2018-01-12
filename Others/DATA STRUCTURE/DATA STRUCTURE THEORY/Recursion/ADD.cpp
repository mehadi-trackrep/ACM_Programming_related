#include <cstdio>
#include <iostream>
using namespace std;

int add(int n)
{
    if(n == 1)
        return 1;

    printf("=> %d\n",n);

    return n + add(n-1) + add(n-1);

    printf("==> %d\n",n);
}

int main()
{
    int a = add(4);
    cout << a << endl;
    return 0;
}
