#include<cstdio>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstring>
#include<cstdlib>

#include<algorithm>
#include<iostream>
#include<fstream>
#include<sstream>

#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<iterator>
#include<numeric>
#include<stack>
#include<list>
using namespace std;

int main()
{
    int i,n,x;

    scanf("%d",&n);
    queue <int> q;
    for(i = 0;i < n;i++){
        scanf("%d",&x);
        q.push(x);
    }

    cout << sizeof(q) << endl;

    for(i = 0;i < n;i++){
        x = q.front();
        cout << x << endl;
        q.pop();
    }

    return 0;
}
