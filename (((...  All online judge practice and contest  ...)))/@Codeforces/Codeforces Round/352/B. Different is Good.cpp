#include<bits/stdc++.h>

using namespace std;

const int maxn = 100000 + 50;   ///AC
char a[maxn];
bool vis[maxn];

int main(){

    int n;
    scanf("%d", &n);
    scanf("%s", a);
    int cnt = 0;
    int k = 0;

    for (int i = 0; i < n; i++){
        int p = a[i] - 'a';
        if (vis[p] == 0) vis[p] = true, k++;    /// total distinct char. shonkha ...
        else cnt++;     ///  joto gula double/beshi bar ace tader nummation
    }

    if (cnt + k > 26) cnt = -1;

    printf("%d\n", cnt);

    return 0;
}
