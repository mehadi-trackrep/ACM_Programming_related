#include <bits/stdc++.h>
using namespace std;

vector<string> st;
vector<string> vc;

string mom;
int len;


bool hamming_distance(string a){

    int cnt=0;
    for(int i=0; i<len; i++){
        if(a[i] != mom[i]) cnt++;
    }
    if(cnt > 1) return false;
    else return true;
}

void probable_lists(int n){
    string s;

    for(int i=0; i<n; i++){
        s = vc[i];
        if(hamming_distance(s) == true){
            st.push_back(s);
        }
    }
}


int main(){

    int tc,n;
    string s;

    cin >> tc;

    for(int i=1; i<=tc; i++){

        cin >> n;

        for(int j=0; j<n; j++){
            cin >> s;
            vc.push_back(s);
        }

        cin >> mom;
        len = mom.size();

        probable_lists(n);

        printf("Case %d:\n",i);

        for(int i=0; i<st.size(); i++){
            cout << st[i] << endl;
        }

        st.clear();
        vc.clear();
    }

    return 0;
}
