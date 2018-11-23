#include <bits/stdc++.h>
using namespace std;

int ans=0,p;

void subString(string str, int n)
{
    string s;
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            s = "";
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
                s += str[k];

            int val = stoi(s);
            if(val%p == 0) ans++;
            //cout << s << endl;
        }
    }
}

int main ()
{
    int tc,n;
    double a,b;

    cin >> tc;

    for(int t=1; t<=tc; t++){
        ans = 0;
        cin >> a >> b >> n >> p;

        double k = a/b;
        string str = to_string(k);
        // cout << str << '\n';

        int l = str.size(),ck=0,cnt=1;

        string s = "";

        for(int i=0; i<l; i++){
            if(ck == 1 && cnt<=n){
                s += str[i];
                cnt++;
            }
            if(str[i] == '.')
            {
                ck = 1;
            }
        }

        subString(s,n);

        //cout << " -- " << s << endl;

        cout << ans << endl;
    }
  return 0;
}
