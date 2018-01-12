#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
int main()
{
    stack <int> st;

    int i,n,up;

    for(i = 0;i < 5;i++){
        scanf("%d",&n);
        st.push(n);
    }

    up = st.top();

    printf("%d ",up);

    st.pop();

    up = st.top();

    printf("%d ",up);

    return 0;
}
