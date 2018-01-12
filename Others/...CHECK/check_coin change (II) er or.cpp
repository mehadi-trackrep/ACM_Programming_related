#include <bits/stdc++.h>
using namespace std;

#define mx       1005
#define mxn      55
#define mod      100000007

#define loop_tcas(tcas)     for(int i=1; i<=tcas; i++)

int a[mx];
int c[mx];
int dp[mxn];

void solve(int cas)
{
    int N,K;
    cin >> N >> K;

    for(int i=1; i<=N; i++) cin >> a[i];

    memset(dp,0,sizeof(dp));    /// initially dhore nilam , sob value bananor way 0
    dp[0] = 1;     /// means 0 value banano jay only 1 vabe , r ta holo kono taka na niye ... , that's the base criteria(condition)

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=K; j++)
        {
            for(int x=1; x<=K; x++)
            {
                int ck_val = x*a[i];
                if(j >= ck_val)
                    dp[j] = dp[j] + dp[j-ck_val];
            }
        }
    }

    printf("Case %d: ",cas);

    cout << dp[K] << endl;
}

int main()
{
    int tcas,c=1;
    cin >> tcas;
    while(tcas--)
    {
        solve(c);
        c++;
    }
    return 0;
}


/*


2
3   5
1   2   5   3   2   1
4   20
1   2   3   4   8   4   2   1

*/

