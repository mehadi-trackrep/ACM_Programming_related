#include <iostream>
#include <algorithm>
#include <stack>
#include <cstdio>

using namespace std;

int main()
{
    int i,data;
    stack < int > st;
    for(i = 1;i < 5;i++)
        st.push(i);
    while(!st.empty())
    {
        cout << st.top() << endl; /// top() for printing
        st.pop();  /// pop() for removing
    }
    return 0;
}
