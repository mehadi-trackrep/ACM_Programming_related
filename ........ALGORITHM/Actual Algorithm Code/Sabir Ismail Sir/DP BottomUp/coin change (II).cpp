

int coin[mxn];
int make_value;
int dp[mxn][10005];
int total_coin;
int k;

int call(int i,int amount,int taken_i)      ///  TLE
{
    if(i >= total_coin)   /// All coins have been taken
    {
        if(amount == 0)return 1;
        else return 0;
    }

    if(dp[i][amount] != -1) return dp[i][amount]; ///no need to calculate same state twice
    int ret1=0,ret2=0;

    if(taken_i < k)
        if(amount - coin[i] >= 0) ret1 = call(i,amount-coin[i],taken_i+1); ///try to take coin i
    else taken_i = 0;

    ret2 = call(i+1,amount,taken_i); ///dont take coin i

    return dp[i][amount] = (ret1+ret2)%mod; ///storing and returning.
}


int main()
{
    int tcas;
    cin >> tcas;

    loop_tcas_in(tcas)
    {

        cin >> total_coin >> k;

        for(int i=0; i<total_coin; i++) scanf("%d",&coin[i]);

        memset(dp,-1,sizeof (dp));

        int ans = call(0,k,0);

        printf("Case %d: %d\n",cas,ans);
    }

    return 0;
}

/// save test cases ...

/*


2
3 5
1 2 5
4 20
1 2 3 4


*/

