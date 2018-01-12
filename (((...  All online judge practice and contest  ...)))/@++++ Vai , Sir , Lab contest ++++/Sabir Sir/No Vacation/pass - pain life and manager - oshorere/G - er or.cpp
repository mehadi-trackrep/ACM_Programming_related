
#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

/*

3!=3!   ///not changeable
4!=2!*2!*3!
5!=5!   ///not changeable
6!=123456=5!*3!
8!=12345678=7!*2!*2!*2!
7!=7!   ///not changeable , because that's are prime
9!=123456789=7!*2!*3!*3!

*/

string str[10] = {"","","2","3","223","5","53","7","7222","7332"};  ///AC

int main(){

    int len;
    string in,ans;
    cin >> len;
    cin >> in;

    for(int i=0; i<len; i++)
    {
        int val = in[i]-'0';
        //cerr << "==>" << val << endl;
        if(val == 0 || val == 1) continue;
        else
        {
            ans += str[val];
            //cerr << "-->" << str[val] << endl;
        }
    }

    sort(ans.begin(),ans.end());

    reverse(ans.begin(),ans.end());

    cout << ans << endl;

    return 0;
}
