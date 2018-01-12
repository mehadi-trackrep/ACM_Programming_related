/*
     BISMILLAH HIR RAHMANIR RAHIM
*/

/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>
/// Containers End


using namespace std;

/// I/O Start
#define sf                    scanf
#define pf                    printf

#define sf1(a)                scanf("%d", &a)
#define N 46346

bool flag [N];
vector <int> prime;

void sieve ()
{
    memset (flag, true, sizeof (flag));

    flag [0] = flag [1] = true;

    for ( int i = 4; i < N; i += 2 )
        flag [i] = false;

    for ( int i = 3; i <= N; i++ )
    {
        if ( flag [i] == true )
        {
            for ( int j = i * i; j < N; j += 2 * i )
                flag [j] = false;
        }
    }
}



int main ()
{
    sieve ();

    vector <int> factor, v;
    set <int> s;

    int n, ans, y;

    prime.push_back (2);

    for ( int i = 3; i < N; i++ )
    {
        if ( flag [i] )
            prime.push_back (i);
    }

    for( int i = 2; i <= prime.size(); i++ )
    {
        if( flag[i] == true )
            v.push_back(i);
    }

    while( sf1(n) == 1 && n != 0 )
    {
        //prime.clear ();


        //for(int i=0; i<prime.size(); i++) printf("-->%d ",prime[i]);



        if( n < 0 )
        {
            printf("%d = -1 x ", n);
            n = (-1 * n );
        }
        else
        {
            printf("%d = ", n);
        }
        for( int i = 0; v[i]*v[i] <= n; i++ )
        {
            while( n % v[i] == 0 )
            {
                pf("%d x ", v[i]);
                n /= v[i];
                //i = 0;
            }
        }

        if(n != 1)
            cout << n << endl;

        //v.clear();
        //prime.clear();
    }

    return 0;
}

/*

-190
-191
-192
-193
-194
195
196
197
198
199
200
0

*/
