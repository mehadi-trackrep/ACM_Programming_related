#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;
    string str;
    string page;
    string current_page;

    stack<string> backward_st;
    stack<string> forward_st;

    cin >> tcas;

    for(int i=1; i<=tcas; i++)
    {
        current_page = "http://www.lightoj.com/";   ///AC
        printf("Case %d:\n",i);
        while(1)
        {
            cin >> str;
            if(str == "QUIT") break;
            if(str == "VISIT")
            {
                cin >> page;
                backward_st.push(current_page);
                current_page = page;

                while(!forward_st.empty())
                {
                    forward_st.pop();
                }
                cout << page << endl;
            }
            else if(str == "BACK")
            {
                if(!backward_st.empty())
                {
                    forward_st.push(current_page);
                    current_page = backward_st.top();
                    backward_st.pop();
                    cout << current_page << endl;
                }
                else printf("Ignored\n");
            }
            else if(str == "FORWARD")
            {
                if(!forward_st.empty())
                {
                    backward_st.push(current_page);
                    current_page = forward_st.top();
                    forward_st.pop();
                    cout << current_page << endl;
                }
                else printf("Ignored\n");
            }
        }

        while(!backward_st.empty()) backward_st.pop();
        while(!forward_st.empty()) forward_st.pop();
    }

	return 0;
}

/// save test cases ...

/*

1
VISIT http://uva.onlinejudge.org/
VISIT http://topcoder.com/
BACK
BACK
BACK
FORWARD
VISIT http://acm.sgu.ru/
BACK
BACK
FORWARD
FORWARD
FORWARD
QUIT


*/

