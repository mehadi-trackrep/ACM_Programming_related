#include <bits/stdc++.h>
using namespace std;

string ara[10005];
string query[50005];

int main(){
    int n,q,cnt;
    string s1,s2,s;

    scanf("%d",&n);

    for(int tc=1; tc<=n; tc++){
        cin >> ara[tc];
    }
    scanf("%d",&q);
    for(int tc=1; tc<=q; tc++){
        cin >> query[tc];
    }

    for(int i=1; i<=q; i++){
        s1 = query[i];
        cnt = 0;
        s = "-";
        for(int j=1; j<=n; j++){
            s2 = ara[j];
            if(s2.find(s1) != string::npos){
                if(cnt == 0) s = s2;
                cnt++;
            }
        }
        printf("%d ",cnt);
        cout << s << endl;
    }

    return 0;
}
