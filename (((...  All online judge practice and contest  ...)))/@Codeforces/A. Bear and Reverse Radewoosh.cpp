#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    int p[55],t[55];
    cin >> n >> c;
    for(int i=1; i<=n; i++) ///AC
        scanf("%d",&p[i]);
    for(int i=1; i<=n; i++)
        scanf("%d",&t[i]);
    int sum1 = 0,time = 0;
    for(int i=1; i<=n; i++)
    {
         time += t[i];
         //cerr << "## time: " << time << endl;
         int ck = p[i]-c*time;
         if(ck > 0) sum1 += ck;
         else sum1 += 0;
         //cerr << "## sum1: " << sum1 << endl;
    }
    
    int sum2 = 0;
    time = 0;
    for(int i=n; i>=1; i--)
    {
         time += t[i];
         //cerr << "==> time: " << time << endl;
         int ck = p[i]-c*time;
         if(ck > 0)sum2 += ck;
         else sum2 += 0;
         //cerr << "==> sum2: " << sum2 << endl;
    }
    if(sum1 > sum2)
        printf("Limak\n");
    else if(sum2 > sum1)
        printf("Radewoosh\n");
    else
        printf("Tie\n");
    
    return 0;
}