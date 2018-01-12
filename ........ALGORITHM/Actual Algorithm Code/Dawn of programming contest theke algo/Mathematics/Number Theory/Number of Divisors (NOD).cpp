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

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

#define mx	1000000
#define mod	1000000007
#define INF	2147483647  /// process: age seive use kore prime factorization ber kora ...

                        /// the prime factorization of a number n = p1^a1 * p2^a2 * p3^a3 * ... * pk^ak hole , NOD(n) = (a1 + 1)(a2 + 1) . . . (ak+ 1)

#define Max 600000  /// 6 lakh means, maximum 6 lakhs porjonto prime generate korte pare
bool com[Max];      /// com means composite number arr
int prime[50000],p_cnt = 1; ///  p_cnt means prime number count

void markmultiples(int i){

    int j;

    for(j = i+i;j <= Max;j += i)    /// total koyta prime hoibo:- Formula: Max/(ln(Max)-1)
        com[j] = true;

}

void seive(){

    com[0] = true;
    com[1] = true;
    markmultiples(2);
    prime[p_cnt++] = 2;

    int i;

    for(i = 3;i <= Max;i += 2){
        if(!com[i]){
            markmultiples(i);
            prime[p_cnt++] = i;
        }
    }

}


int main()
{
    int n;

    seive();    /// v.v.i.  prime array er index 1 theke  start na korle jhamela kore ... :(

    while(scanf("%d",&n) == 1)
    {
        int nod = 0;
        int x = n;

        for(int i=1; (prime[i]*prime[i] <= n && i <= p_cnt); i++)
        {
            if(n%prime[i] == 0)
            {
                int cnt = 0;
                while(n%prime[i] == 0)
                {
                    //cerr << "--> prime[i]: " << prime[i] << endl;
                    cnt++;
                    n /= prime[i];
                }
                nod += (cnt+1);
            }
        }

        if(n > 1) nod += 2;

        printf("%d er number of divisors: %d\n",x,nod);
    }

	return 0;
}

/// save test cases

/*




*/
