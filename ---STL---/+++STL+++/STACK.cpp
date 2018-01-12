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
    stack <int> st;
    for(i = 0;i < n;i++){
        scanf("%d",&x);
        st.push(x);
    }

    cout << sizeof(st) << endl;

    for(i = 0;i < n;i++){
        x = st.top();
        cout << x << endl;
        st.pop();
    }

    return 0;
}
