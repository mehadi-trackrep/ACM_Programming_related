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
using namespace std;
#define N 5000007
#define ll long long            ///AC

int main()
{
    ll tcas,L,R;

    ll sum_L,sum_R;

    cin >> tcas;

    while(tcas--)
    {
        scanf("%lld%lld",&L,&R);

        if(L > 0) L--;

        if(L%4 == 2 || L%4 == 3) sum_L = ((L/2)+1)*((L/2)+1);
        else
        {
            if(L%4 == 0 || L == 1)
                sum_L = L*(L/4 + 1);
            else
            {
                //cerr << "check" << endl;
                L--;
                sum_L = L*(L/4 + 1);
            }
        }

        if(R%4 == 2 || R%4 == 3) sum_R = ((R/2)+1)*((R/2)+1);
        else
        {
            if(R%4 == 0 || R == 1)
                sum_R = R*(R/4 + 1);
            else
            {
                //cerr << "check" << endl;
                R--;
                sum_R = R*(R/4 + 1)+1;
            }
        }

        //cerr << "-->sum_L " << sum_L << " -->sum_R " << sum_R << endl;

        printf("%lld\n",(sum_R - sum_L));
    }

	return 0;
}

/// save test cases ...

/*




*/
