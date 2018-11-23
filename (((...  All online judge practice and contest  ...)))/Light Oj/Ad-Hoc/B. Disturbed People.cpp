#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[105];
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> ara[i];

    }
    int prev=0,k=0;
    for (int i=1; i<=n; i++){
        if(ara[i]==0 && i-1>=1 && i+1<=n){
            if(ara[i-1] == 1 && ara[i+1] == 1){
                if(prev != i-1){
                    k++;
                    prev = i+1;
                }
                if(prev == 0){
                    k++;
                    prev = i+1;
                }
            }
        }
    }
    cout << k << endl;
}
