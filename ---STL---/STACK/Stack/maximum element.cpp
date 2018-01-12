#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;    /// WA
stack <int> sk;
int max();
int m;
int main()
{
    int n,q,x,m;

    cin >> n;

    while(n--){
        scanf("%d",&q);
        if(q == 1){
            scanf("%d",&x);
            sk.push(x);
        }
        else if(q == 2){
            sk.pop();
        }
        else if(q == 3){
            m = max();
            printf("%d\n",m);
        }
    }

    return 0;
}

int max()
{
    int val;
    m = 0;
    while(!sk.empty()){
        val = sk.top();
        if(val > m)
            m = val;
        sk.pop();
    }
    return m;
}

/*

10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3

*/
