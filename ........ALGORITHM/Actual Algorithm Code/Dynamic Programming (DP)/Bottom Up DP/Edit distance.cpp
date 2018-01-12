#include <bits/stdc++.h>
using namespace std;

string str1,str2;
int len1,len2;
int dp[2005][2005];

void init()
{
    for(int i=0; i<=len1; i++) dp[i][0] = i;        ///AC
    for(int j=0; j<=len2; j++) dp[0][j] = j;
}

int find_edit_distance()
{
    init();

    for(int i=1; i<=len1; i++)
    {
        for(int j=1; j<=len2; j++)
        {
            if(str1[i-1] == str2[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]) + 1;
        }
    }

    return dp[len1][len2];
}

int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        cin >> str1 >> str2;
        len1 = str1.size();
        len2 = str2.size();

        int ans = find_edit_distance();

        printf("%d\n",ans);
    }

    return 0;
}

/*

1
FOOD
MONEY

*/
