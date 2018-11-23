#include <bits/stdc++.h>>
using namespace std;

int main(){
    int n;
    vector <string> vitamins;
    int prices[1005];
    int ck[10], inf=100005;

    memset(ck, inf, 8);
    string s;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&prices[i]);
        cin >> s;
        vitamins.push_back(s);
        if(vitamins[i] == "A" && prices[i] < ck[0]){
            //cerr << " -- " << endl;
            ck[0] = prices[i];
        }
        if(vitamins[i] == "B" && prices[i] < ck[1]){
            //cerr << " -- " << endl;
            ck[1] = prices[i];
        }
        if(vitamins[i] == "C" && prices[i] < ck[2]){
            //cerr << " -- " << endl;
            ck[2] = prices[i];
        }
        if(vitamins[i] == "AB" && prices[i] < ck[3]){
            //cerr << " -- " << endl;
            ck[3] = prices[i];
        }
        if(vitamins[i] == "AC" && prices[i] < ck[4]){
            //cerr << " -- " << endl;
            ck[4] = prices[i];
        }
        if(vitamins[i] == "BC" && prices[i] < ck[5]){
            //cerr << " -- " << endl;
            ck[5] = prices[i];
        }
        if(vitamins[i] == "ABC" && prices[i] < ck[6]){
            //cerr << " -- " << endl;
            ck[6] = prices[i];
        }
    }

    int ans = -1;
    if(ck[0]!=inf && ck[1]!=inf && ck[2]!=inf) ans = ck[0] + ck[1] + ck[2];
    if(ans != -1 && ck[3]+ck[2]<ans) ans = ck[3] + ck[2];
    if(ans != -1 && ck[3]+ck[2]<ans) ans = ck[3] + ck[2];


    return 0;
}
