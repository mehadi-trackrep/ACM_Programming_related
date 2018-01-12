#include <iostream>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len = str.length();
    stack <int> st;
    vector <char> exp;
    for(int i = 0;i < len;i++){
        if(str[i] == ')'){
            while(st.top() != '('){
                exp.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else if(((int)str[i]-'0') >= 0 && ((int)str[i]-'0') <= 9)
            exp.push_back(str[i]);
        else
            st.push(str[i]);
    }
    vector<char> :: iterator it;
    for(it = exp.begin();it != exp.end();it++){
        cout << *it;
    }
    return 0;
}
/*
4,5,6,+,-,2,3,*,*
*/

/*
(4+5*(6-3))
*/
