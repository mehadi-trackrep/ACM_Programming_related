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

    int a=0,b=0,c=0;

    for(int i=0; i<n; i+=3 )
    {
        a += ara[i];
    }
    for(int i=1; i<n; i+=3 )
    {
        b += ara[i];
    }
    for(int i=2; i<n; i+=3 )
    {
        c += ara[i];
    }

    int M = 0,ind;

    if(M < a){
        ind = 0;
        M = a;
    }

    if(M < b){
        ind = 1;
        M = b;
    }

    if(M < c){
        ind = 2;
        M = c;
    }

    //cerr << "###" << " mp[0]: " << mp[0] << " mp[1]: " << mp[1] << " mp[2]: " << mp[2] << endl;
    //cerr << "###" << " a: " << a << " b: " << b << " c: " << c << endl;

    if(ind == 0)
        printf("chest\n");
    else if(ind == 1)
        printf("biceps\n");
    else if(ind == 2)
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
