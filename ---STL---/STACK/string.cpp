#include <iostream>
#include <string.h>
#include <cstdio>
#include <stack>
using namespace std;
int main()
{
    int n,i,x,j;
    string str,str1;
    stack <string> st;

    scanf("%d",&n);
    getchar();

    for(i = 0;i < n;i++){
        getline(cin ,str,'\n');
        st.push(str);
    }

    while(!st.size()){  /// problem
        str1 = st.top();
        cout << str1;
        st.pop();
    }

    return 0;
}
