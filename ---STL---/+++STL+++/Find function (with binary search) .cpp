#include <bits/stdc++.h>
using namespace std;

queue<int> q1;
queue<int> q2;
vector< pair< queue<int>, queue<int> > > vec;

main()
{
    q1.push(1);
    q2.push(2);

    ///Syntax: find (values.begin(), values.end(), search_value) == values.end() ; means not found :)
    /// Or, find (values.begin(), values.end(), search_value) != values.end() ; means search value ti paoa gece ... :)

    if( find(vec.begin(),vec.end(),make_pair(q1,q2)) == vec.end() )
        printf("Not found the value\n");
    else
        printf("Found the value\n");
}
