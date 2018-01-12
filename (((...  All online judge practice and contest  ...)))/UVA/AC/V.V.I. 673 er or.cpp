#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    string str;
    int t,ck;
    cin >> t;
    getchar();
    while(t--){
        getline(cin,str);
        int len = str.length();
        stack <char> st;
        ck = 1;
        for(int i = 0;i < len;i++){
            if(str[i] == ')' && (st.size() == 0 || st.top() != '(')){
                cout << "No" << endl;
                ck = 0;
                break;
            }
            else if(str[i] == ']' && (st.size() == 0 || st.top() != '[')){
                cout << "No" << endl;
                ck = 0;
                break;
            }
            else if(str[i] == ')' && st.top() == '(')
                st.pop();
            else if(str[i] == ']' && st.top() == '[')
                st.pop();
            else
                st.push(str[i]);
        }
        if(ck == 1 && st.size() == 0)
            cout << "Yes" << endl;
        else if(ck == 1 && st.size() != 0)
            cout << "No" << endl;
    }

    return 0;
}
