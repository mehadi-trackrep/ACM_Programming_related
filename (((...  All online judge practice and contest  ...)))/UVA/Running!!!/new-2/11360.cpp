#include <bits/stdc++.h>
using namespace std;
int N;
char mat[10][10];

void transpose()
{

    for(int i=0; i<N; i++)
    {
        
        for(int j=i; j<N; j++)
        {
            swap(mat[i][j],mat[j][i]);
        }

    }
}

void row(int a,int b)
{
    for(int i=0; i<N; i++)
    {
        swap(mat[a][i],mat[b][i]);
    }
}

void col(int a,int b)
{
    for(int i=0; i<N; i++)
    {
        swap(mat[i][a],mat[i][b]);
    }
}

void inc()
{
    for(int i=0; i<N; i++)
    {

        for(int j=0; j<N; j++)
        {
            if( (mat[i][j]  == '9') )
                mat[i][j] = '0';
            else
                mat[i][j]++;
        }

    }
}

void dec()
{
    for(int i=0; i<N; i++)
    {

        for(int j=0; j<N; j++)
        {
            if( (mat[i][j]  == '0') )
                mat[i][j] = '9';
            else
                mat[i][j]--;
        }

    }
}

int main()
{
    int tcas,c=1;
    cin >> tcas;
    while(tcas--)
    {
        cin >> N;
        getchar();
        
        for(int i=0; i<N; i++)
        {
            gets(mat[i]);
        }
        
        int query,a,b;
        char str[15];
        cin >> query;
        getchar();
        while(query--)
        {
            cin >> str;

            if(strcmp(str,"transpose") == 0) transpose();
            else if(strcmp(str,"row") == 0)
            {
                cin >> a >> b;
                row(a-1,b-1);
            }
            else if(strcmp(str,"col") == 0)
            {
                cin >> a >> b;
                col(a-1,b-1);
            }
            else if(strcmp(str,"inc") == 0) inc();
            else if(strcmp(str,"dec") == 0) dec();
        }
        
        printf("Case #%d\n",c++);
        for(int i=0; i<N; i++)
        {
            puts(mat[i]);

        }
        printf("\n");
    }

    return 0;
}

/*

2
4
1234
5678
1234
5678
1
transpose
3
000
111
000
2
row 1 2
inc

*/
