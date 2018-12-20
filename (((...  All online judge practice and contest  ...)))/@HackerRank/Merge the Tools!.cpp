#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;

    cin >> s;

    int n = s.size();
    int k, l, ind;

    cin >> k;
    l =  n/k;

    int vis[300];

    memset(vis, 0, sizeof(vis));

    vector <string> vec;

    s1 = "";

    for(int i=0; i<n; i++){
        if( (i+1)%l == 0 ){
            ind = int(s[i]);
            if(!vis[ind]) s1 += s[i];
            vec.push_back(s1);
            s1 = "";
            memset(vis, 0, sizeof(vis));
        }else{
            ind = int(s[i]);
            if(!vis[ind]) s1 += s[i];
            vis[ind] = 1;
        }
    }

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }

    return 0;
}
