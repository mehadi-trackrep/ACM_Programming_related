#include <queue>
#include <iostream>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

struct data {

        char name[100];
        int height, weight;
        long long income;

    }a[100],b[100];

bool compare( data a, data b ) {  /// problem ace
    if( a.income == b.income ) {

        if( a.height == b.height ) {

            if( a.weight == b.weight )
                return strlen( a.name ) < strlen( b.name );
            else
                return a.weight < b.weight;
        }

        else
            return a.height > b.height;
    }

    else
        return a.income > b.income;
}

int main()
{

    sort( v.begin(), v.end(), compare );


    return 0;
}

