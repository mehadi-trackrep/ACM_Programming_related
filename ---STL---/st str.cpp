#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack < string > st;
    for(int i=0;i<5;i++)
    {
        string s1;
        cin>>s1;
        st.push(s1);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
