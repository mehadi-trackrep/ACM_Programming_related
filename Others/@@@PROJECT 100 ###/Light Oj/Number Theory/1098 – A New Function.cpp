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

                    /// the prime factorization of a number n = p1^a1 * p2^a2 * p3^a3 * ... * pk^ak hole ,
                    /// SOD(n) = (1 + p1 + p1^2+ . . . + p1^a1)(1 + p2 + p2^2+ . . . + p2^a2) . . . (1 + pk + pk^2+ . . . + pk^ak)
    /// (1 + p1 + p1^2+ . . . + p1^a1) = (p1^(a1+1) - 1)/(p1-1)

    ///.(1 + ar + ar^2 + ar^3 + ... + ar^n) = (ar^(n+1) - 1)/(r-1) .


#define Max 1000000
bool com[Max];
ll prime[78500],p_cnt = 1; ///  p_cnt means prime number count

map <ll,ll> mp;       /// CSOD map kore rakhbo ...

void markmultiples(ll i){

    ll j;

    for(j = i+i;j <= Max;j += i)    /// total koyta prime hoibo:- Formula: Max/(ln(Max)-1)
        com[j] = true;

}

void seive(){

    com[0] = true;
    com[1] = true;
    markmultiples(2);
    prime[p_cnt++] = 2;

    ll i;

    for(i = 3;i <= Max;i += 2){
        if(!com[i]){
            markmultiples(i);
            prime[p_cnt++] = i;
        }
    }

}

ll SOD(ll n)
{
    if(n <= 1000000 && com[n] == false) return 0;

    ll sod = 1;

    ll x = n+1;

    for(ll i=1; (prime[i]*prime[i] <= n && i <= p_cnt); i++)
    {
        if(n%prime[i] == 0)
        {
            ll cnt = 0;
            while(n%prime[i] == 0)
            {
                cerr << "--> prime[i]: " << prime[i] << endl;
                cnt++;
                n /= prime[i];
            }

            double p = pow((double)prime[i],(double)(cnt+1));

            cerr << "for prime-> " << prime[i] << ", p = " << p << endl;

            sod *= (((ll)p - 1)/(prime[i]-1));
            cerr << "-->sod: " << sod << endl;
        }
    }

    if(n > 1) sod *= ((n*n - 1)/(n-1));

    return (sod-x);     /// exact sum of divisors

}


int main()
{

    ll n;

    seive();    /// v.v.i.  prime array er index 1 theke  start na korle jhamela kore ... :(

    mp[0] = mp[1] = mp[2] = mp[3] = 0;

    for(ll i=4; i<=2000000000; i++) /// evabe hobe na ...
    {
        ll _sod = SOD(i);
        mp[i] = mp[i-1] + _sod;
    }

    while(scanf("%d",&n) == 1)
    {


        printf("%d er sum of divisors: %d\n",x,sod);
    }

	return 0;
}

/// save test cases

/*




*/


