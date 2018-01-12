#include <iostream>
#include <stack>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len = str.length();
    stack <int> st;
    for(int i = 0;i < len;i+=2){
        if(((int)str[i]-'0') >= 0 && ((int)str[i]-'0') <= 9)
            st.push((int)str[i]-'0');
        else if(str[i] != ','){
                                /// operation
            int d1,d2;
            d1 = st.top();
            st.pop();
            d2 = st.top();
            st.pop();
            if(str[i] == '+')
                st.push(d2 + d1);
            else if(str[i] == '-')
                st.push(d2 - d1);
            else if(str[i] == '*')
                st.push(d2 * d1);
            else if(str[i] == '/')
                st.push(d2 / d1);
        }
    }
    printf("%d\n",st.top());
    return 0;
}
/*

4,5,6,+,-,2,3,*,*

*/
