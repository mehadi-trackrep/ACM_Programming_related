
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ara[25];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int chest = 0,biceps = 0,back = 0;  ///AC

    for(int i=0; i<n; i++)
    {
        if(i%3 == 0)
        {
            chest += ara[i];
        }
        else if(i%3 == 1)
        {
            biceps += ara[i];
        }
        else if(i%3 == 2)
        {
            back += ara[i];
        }
    }

    if(chest > biceps && chest > back)
        printf("chest\n");
    else if(biceps > chest && biceps > back)
        printf("biceps\n");
    else if(back > chest && back > biceps)
        printf("back\n");

    return 0;
}

/*

7
3 3 2 7 9 6 8

2
2 8

12
3 3 2 7 9 6 8 1 2 3 4 5

*/
