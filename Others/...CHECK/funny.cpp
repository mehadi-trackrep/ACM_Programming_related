#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int n,t;
    cin>>n>>t;

    if(n==1 && t==10)
        printf("-1");

    if( n>1 && t==10)   ///why malfunction here????
    {
       printf("1");
        for(int i=1; i<n; i++)
            printf("0");
    }
    else
       for(int i=0; i<n; i++)
            printf("%d",t);
    printf("\n");


    return 0;

}

/*
input 1 10
ouyput???

*/
