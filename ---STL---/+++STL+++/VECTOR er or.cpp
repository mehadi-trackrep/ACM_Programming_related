#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector< int > vec; /// iterator use na kore...

    vec.push_back( 1 );
    vec.push_back( 2 );
    vec.push_back( 3 );
    vec.push_back( 4 );

    for(i=0; i<vec.size(); i++) cout << vec[i] << endl;

    reverse(vec.begin(),vec.end()); /// reverse
    i = 0;
    cout << "\n\n";
    while(!vec.empty())
    {
        cout << vec[i] << endl;
        vec.pop_back();             /// 0 th index theke serially data delete kore ...
        i++;
    }
    ///or,
    for(int i = 0;i < vec.size();i++)
    {
        cout << vec[i] << endl;
        //vec.pop_back();
        i++;
    }

    return 0;
}
