#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    char line[1000];
    while( gets( line ) ) { /// problem header file nei
        stringstream ss( line ); // initialize kortesi
        int num; vector< int > v;
        while( ss >> num ) v.push_back( num ); /// ekhane ss >> num , ortho input and code total while loop 2 ti
        sort( v.begin(), v.end() );
        // print routine
    }


    return 0;
}
