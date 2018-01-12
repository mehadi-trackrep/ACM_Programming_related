#include <iostream>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
int main()
{
    char str[100];
    int i = 0,t;
    char chr;

    scanf("%d",&t);
    scanf("%c",&chr);
    scanf("%c",&chr);

    while(t >= 1){
        i = 0;
        while(scanf("%c",&str[i]) && str[i] != '\n'){
            scanf("%c",&chr);
            i++;
            //cout << str[i] << chr;
        }
        str[i] = '\0';
        int len = i;
        stack <int> st;
        vector <char> exp;
        st.push('(');
        for(int i = 0; i <= len; i++)
        {
            if(((int)str[i]-'0') >= 0 && ((int)str[i]-'0') <= 9)
                exp.push_back(str[i]);
            else if(str[i] == '/' || str[i] == '*' || str[i] == '+' || str[i] == '-')
            {
                char c = st.top();
                if(str[i] == '/' || str[i] == '*'){
                    while(c == '*' || c == '/'){
                        exp.push_back(c);
                        st.pop();
                        c = st.top();
                    }
                    st.push(str[i]);
                }
                else if(str[i] == '+' || str[i] == '-'){
                    while(c == '*' || c == '/' || c == '+' || c == '-'){
                        exp.push_back(c);
                        st.pop();
                        c = st.top();
                    }
                    st.push(str[i]);
                }
                else
                    st.push(str[i]);
            }
            if(str[i] == ')' || i == len-1)
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
        if(t > 1)
            cout << "\n\n";
        //scanf("%c",&chr);
        t--;
    }

    return 0;
}

/*

0*8-4*6+4/7*

1

0
*
8
-
4
*
6
+
4
/
7
*


*/
