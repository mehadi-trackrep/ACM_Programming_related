#include <iostream>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;    ///AC

int main()
{
    int t;
    char ch;
    string in_str;

    scanf("%d\n",&t);
    vector <char> exp;

    while(t--){

        exp.clear();
        in_str = "";   ///null kora;
        stack <int> st;
        char ara[100];

        for(int i=0; ; i++)
        {
            scanf("%c",&ch);
            ara[i]=ch;
            if(i > 0) if(ara[i] == ara[i-1] && ara[i] == '\n') break;
            if(ch != '\n')
                in_str = in_str + ch;
        }

        in_str = '(' + in_str + ')';    /// age,pore brackets

        for(int i=0; i<in_str.size(); i++){

            if(in_str[i] >= '0' && in_str[i] <= '9')
                exp.push_back(in_str[i]);
            else if(in_str[i] == '(')
                st.push(in_str[i]);
            else if(in_str[i]== '/' || in_str[i] == '*' || in_str[i] == '+' || in_str[i] == '-')
            {
                if(in_str[i] == '/' || in_str[i]== '*'){
                    while(1){
                        ch = st.top();
                        if(ch == '+' || ch == '-' || ch == '(' || st.empty()) break;
                        exp.push_back(ch);
                        st.pop();
                    }
                    st.push(in_str[i]);
                }
                else if(in_str[i] == '+' || in_str[i] == '-'){
                    while(1){
                        ch = st.top();
                        if(ch == '(' || st.empty()) break;
                        exp.push_back(ch);
                        st.pop();
                    }
                    st.push(in_str[i]);
                }
            }
            else if(in_str[i] == ')')
            {
                while(st.top() != '(')
                {
                    exp.push_back(st.top());
                    st.pop();
                }
                st.pop();/// start bracket reo pop korte hobe...
            }


        }

        vector<char> :: iterator it;
        for(it = exp.begin(); it != exp.end(); it++)
        {
            cout << *it;
        }
        printf("\n");

        if(t != 0)
            printf("\n");
        /// cerr << t << endl;
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
