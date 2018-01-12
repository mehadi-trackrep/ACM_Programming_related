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

    stack <char> st;
    vector <char> exp;

    st.push('(');
    str[len] = ')';

    for(int i = 0; i <= len; i++)
    {
        if(str[i] == '(')
            st.push(str[i]);

        else if(str[i] != ')' && str[i] != '^' && str[i] != '/' && str[i] != '*' && str[i] != '+' && str[i] != '-')
            exp.push_back(str[i]);

        else if(str[i] == '^' || str[i] == '/' || str[i] == '*' || str[i] == '+' || str[i] == '-')
        {
            char c = st.top();

            if(str[i] == '^')
            {
                while(c == '^')
                {
                    exp.push_back(c);
                    st.pop();
                    c = st.top();
                }
                st.push(str[i]);
            }

            else if(str[i] == '/' || str[i] == '*')
            {
                while(c == '^' || c == '*' || c == '/')
                {
                    exp.push_back(c);
                    st.pop();
                    c = st.top();
                }
                st.push(str[i]);
            }

            else if(str[i] == '+' || str[i] == '-')
            {
                while(c == '^' || c == '*' || c == '/' || c == '+' || c == '-')
                {
                    exp.push_back(c);
                    st.pop();
                    c = st.top();
                }
                st.push(str[i]);
            }

        }
        ///...................................................................
        else
        {
            while(st.top() != '(')
            {
                exp.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
    }

    vector<char> :: iterator it;
    for(it = exp.begin(); it != exp.end(); it++)
    {
        cout << *it;
    }

    return 0;
}

/*
4,5,6,+,-,2,3,*,*
*/

/*
(4+5*(6-3))
(4*5+(6-3))

(4*5*6+5+5*5)
0*8-4*6+4/7*

(3+5)*5*(2^2)/4

......................

A+(B*C-(D/E^F)*G)*H

*/

