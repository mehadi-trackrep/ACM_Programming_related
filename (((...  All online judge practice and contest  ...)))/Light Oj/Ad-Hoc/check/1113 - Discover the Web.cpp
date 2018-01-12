#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <string> forward_st;
    stack <string> backward_st;

    int tcas;

    cin >> tcas;

    getchar();
    string str;
    string current_page;

    while(tcas--)
    {
        getline(cin,str);

        if(str[0] == 'V')
        {
            int len = str.length();
            int j=0;
            for(int i=6; i<len; i++)
            {
                current_page[j++] = str[i];
            }
            current_page[j] = '\0';
            backward_st.push(current_page);
//            int len = str.length();
//            int j=0;
//            for(int i=6; i<len; i++)
//            {
//                current_page[j++] = str[i];
//            }
        }
        else if(str[0] == 'B')
        {
            if(!backward_st.empty())
            {
                forward_st.push(current_page);
                current_page = backward_st.top();
                backward_st.pop();
            }
        }
        else if(str[0] == 'F')
        {
            if(!forward_st.empty())
            {
                backward_st.push(current_page);
                current_page = forward_st.top();
                forward_st.pop();
            }
        }
        else if(str[0] == 'Q')
        {
            if(!backward_st.empty())
            {
                forward_st.push(current_page);
                current_page = backward_st.top();
                backward_st.pop();
            }
        }

    }

    return 0;
}
