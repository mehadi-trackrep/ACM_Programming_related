#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> ara;
    vector <int> ara1;
    vector<int> ans;

    cin >> n;

    int sum=0,a;

    for(int i=0; i<n; i++){
        cin >> a;
        ara.push_back(a);
        sum += ara[i];
        ara1.push_back(ara[i]);
    }

    sort(ara1.begin(), ara1.end());

    int val,pos,cnt=0;

//    for(int i=0; i<n; i++){
//        pos = lower_bound(ara1.begin(), ara1.end(), ara[i]) - ara1.begin();
//        cerr << "==> pos: " << pos << endl;
//        cerr << " --> ara1[pos]: " << ara1[pos] << endl;
//        if(sum-ara[i]-ara1[pos] == ara1[pos]){
//            cnt++;
//            ans.push_back(i+1);
//        }
//    }

    for(int i=n-1; i>=0; i--){
        if( i-1 >= 0 && (sum-ara1[i]-ara1[i-1] == ara1[i-1]) ){
            cnt++;
            ans.push_back(i+1);
        }
    }

    cout << cnt << endl;
    for(int i=0; i<ans.size(); i++)
    {
        if(i==0) cout << ans[i];
        else cout << " " << ans[i];
    }
    cout << endl;

    return 0;
}
