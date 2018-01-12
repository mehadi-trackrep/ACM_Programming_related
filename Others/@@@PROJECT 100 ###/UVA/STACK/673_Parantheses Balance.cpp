#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
using namespace std;
int main()
{
    string str;
    int len,i,t,ck;
    cin >> t;
    getchar();
    while(t--){
        stack <char> st;
        getline(cin,str);
        ck = 0;
        for(int i = 0;i < str.size();i++){
            if(str[i] == '(' || str[i] == '[')
                st.push(str[i]);
            else if(str[i] == ')' && !st.empty() && st.top() == '(')
                st.pop();
            else if(str[i] == ']' && !st.empty() && st.top() == '[')
                st.pop();
            else
                ck = 1;
        }
        if(st.empty() && ck == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
