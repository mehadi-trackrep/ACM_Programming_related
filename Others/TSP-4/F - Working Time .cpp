#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n,m,h1,m1,h2,m2;
    cin >> tc;
    string a,b;

    while(tc--){
        cin >> n >> m;
        int minutes = 0;

        for(int i=0; i<n; i++){
            cin >> a >> b;
            //cout << a << " " << b;
            h1 = (a[0]-'0')*10 + a[1]-'0';
            m1 = (a[3]-'0')*10 + a[4]-'0';
            //cout << h1 << " -- "<< m1 << endl;
            h2 = (b[0]-'0')*10 + b[1]-'0';
            m2 = (b[3]-'0')*10 + b[4]-'0';

            if(h1 == h2){
                minutes += m2 - m1;
            }
            else{
                minutes += (h2-h1-1)*60 + (60-m1)+m2;
            }
        }
        if(minutes/60 >= m) cout << "YES\n";
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
