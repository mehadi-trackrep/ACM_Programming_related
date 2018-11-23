#include <bits/stdc++.h>
using namespace std;

vector< pair<int,int> > vec;
pair <int,int> par;

struct sort_pred {
    bool operator()(const pair<int,int> &left, const pair<int,int> &right) {
        return left.second < right.second;
    }
};

int main(){
    int tc, n, a, b;
    cin >> tc;

    for(int i=1; i<=tc; i++){

        cin>>n;
        int total=0;
        long long mx=0, sum=0;

        for(int j=0; j<n; j++){
            cin >> a >> b;
            vec.push_back(make_pair(a,b));
            total += a;
        }

        sort(vec.begin(), vec.end(), sort_pred());

        for(int j=0; j<n; j++){
            par = vec[j];
            if( ((par.second) * (total-sum)) > mx ){
                mx = ((par.second) * (total-sum));
            }
            sum += par.first;
        }


        printf("Case %d: %lld\n",i,mx);


        vec.clear();
    }

    return 0;
}
