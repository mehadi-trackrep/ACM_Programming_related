
            ///  Fast Bit Calculations

#include <bits/stdc++.h>
using namespace std;

vector <int> vec;

int len,ret = 0;

int dp[32][2][2];       /// therefore , maximum 32 bit binary digit thakbe , flag 0/1 , prev_pos  0/1 diye fill-up korte hoibo ...

int digit_dp(int pos,bool flag,int prev_pos)
{

    if(pos >= len) return 0;

    if(dp[pos][flag][prev_pos] != -1) return dp[pos][flag][prev_pos];

    int highest_digit = (flag) ?  vec[pos] : 1;      /// flag true(1) means ager sob position highest value diye fill-up kora ace ...

    int ret = 0;

    for(int i=0; i<highest_digit; i++)
    {
        if(i == 0 && prev_pos == 1) ret++;
        ret += digit_dp(pos+1,(flag && (i == highest_digit)),i);
    }

    return dp[pos][flag][prev_pos] = ret;
}

int main()
{
    int tc,n;

    cin >> tc;

    while(tc--)
    {
        cin >> n;

        while(n > 0)
        {
            vec.push_back(n%2);
            n /= 2;
        }

        reverse(vec.begin(),vec.end());

//        for(int i=0; i<vec.size(); i++)
//            cerr <<  vec[i];
//        cerr << endl;

        len = vec.size();

        memset(dp,-1,sizeof(dp));

        int ans = digit_dp(0,true,0);

        printf("%d\n",ans);

        vec.clear();
    }

    return 0;
}
