#include <bits/stdc++.h>
using namespace std;

int mark[1000005];

vector <int> divisors[1000005];

void Divisors(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j += i)
            divisors[j].push_back(i);
    }
}

int main()
{
    int n;

    scanf("%d",&n);

    Divisors(n);

    for(int i=1; i<=n; i++)
    {
        printf("%d er divisors: ",i);
        for(int j=0; j<divisors[i].size(); j++)
            cout << divisors[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
