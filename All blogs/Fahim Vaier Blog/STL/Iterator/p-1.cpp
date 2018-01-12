#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector< int > v;
    vector< int > :: iterator i;
    v.push_back( 1 ); v.push_back( 2 ); v.push_back( 3 );v.push_back( 4 );v.push_back( 5 );
    for( i = v.begin(); i < v.end(); i++ ) {
        printf("%d\n", *i);
        // ei khane gola kato!
        //v.erase(i);
    }

    return 0;
}
