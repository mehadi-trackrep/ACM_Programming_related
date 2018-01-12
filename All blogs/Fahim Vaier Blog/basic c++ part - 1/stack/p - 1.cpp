#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack< int > st;
    st.push( 100 ); // inserting 100
    st.push( 101 ); // inserting 101
    st.push( 102 ); // inserting 102

/// st te 3 ti number insert , then last ti output and remove ; that's continuous until st is empty

    while( !st.empty() ) {
        cout << st.top() << endl; // printing the top number
        st.pop(); // removing that one
    }

    return 0;
}
