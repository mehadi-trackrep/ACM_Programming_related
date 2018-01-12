#include <iostream>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;    /// RE

int main()
{
    //char str[100000];
    int t;
    char ch,chr;

    scanf("%d\n",&t);
    //scanf("%c",&chr);
    //scanf("%c",&chr);

    while(t >= 1){

        stack <int> st;
        vector <char> exp;
        st.push('(');

        while(scanf("%c",&ch)){
            //scanf("%c",&chr);
            //cout << str[i] << chr;

            if(ch == ')' || ch == '\n')
            {
                while(st.top() != '(')
                {
                    exp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                if(ch == '\n')
                    break;
            }

            scanf("%c",&chr);

            if(ch >= '0' && ch <= '9')
                exp.push_back(ch);
            else if(ch == '/' || ch == '*' || ch == '+' || ch == '-')
            {
                char c = st.top();
                if(ch == '/' || ch == '*'){
                    while(c == '*' || c == '/'){
                        exp.push_back(c);
                        st.pop();
                        c = st.top();
                    }
                    st.push(ch);
                }
                else if(ch == '+' || ch == '-'){
                    while(c == '*' || c == '/' || c == '+' || c == '-'){
                        exp.push_back(c);
                        st.pop();
                        c = st.top();
                    }
                    st.push(ch);
                }
                else
                    st.push(ch);
            }
        }

        vector<char> :: iterator it;
        for(it = exp.begin(); it != exp.end(); it++)
        {
            cout << *it;
        }

        if(t > 1)
            cout << "\n\n";
        if(t == 1)
            cout << '\n';
        //scanf("%c",&chr);
        t--;
    }

    return 0;
}

/*

0*8-4*6+4/7*
......

2

(
3
+
5
)

(
3
+
5
)

.........

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
