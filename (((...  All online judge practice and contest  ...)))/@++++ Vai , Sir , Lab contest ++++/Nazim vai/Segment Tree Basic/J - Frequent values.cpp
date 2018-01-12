/*
    Let,
    vector v store the input numbers
    vector count  store the frequency of each input numbers , and
    vector start store the index of the input list where a particular input number first appeared.

    For example ,
     v = { 1, 1, 2, 2, 2, 3, 4, 5, 5 }
    count = { 2, 2, 3, 3, 3, 1, 1, 2, 2 }
    start = { 0, 0, 2, 2, 2, 5, 6, 7, 7 }

    A segment tree is constructed where node would store the value of the maximum count of its respective range [ a,b ].

    There are two cases that can occur :
    1. the value of the numbers at index i and j are same , i.e v[ i ] = v[ j ].
    2. the value of the numbers at index i and j are different , v[ i ] ≠ v[ j ].

    Case 1:
    Solving this case is easy. Since v[ i ] = v[ j ] , all the numbers in the range [ i,j ] are same ( since the numbers are non-descending ). The answer for case 1 is j - i + 1.

    Case 2:
    If v[ i ] ≠ v[ j ] then there exist an index k where v[ i ] = v[ k ] and v[ i ] ≠ v[ k + 1 ]. The value of k is
    start[ v[ i ] ] + count[ v[ i ] ] - 1.
    The frequency of the value v[ i ] in the range [i,k] , cnt1 = count[ v[ i ] ] - start[ v[ i ] ] + i
    Frequency of v[ j ] in the range [i,j], cnt2  = j - start[ v[ j ] ] + 1

    The maximum frequency of the values in range [ i,j ] may in fact exists in the range [ k + 1, start[ j ] - 1 ] and can be found by querying the segment tree for the maximum value in the range [ k + 1, start[ j ] - 1 ]. Let the maximum count returned by the query be cnt3.

    Therefore the answer for case2 = max ( cnt1, cnt2 , cnt3 ) .

*/


#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<cctype>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<sstream>
#include<vector>
using namespace std;

typedef vector<int> vi;
typedef vector< vi > vii;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<int,string> mis;


#define pb push_back
#define MAX 200005
#define S 100000
#define MAX2 1000000
#define ll long long

ll N,Q;
ll cnt[ MAX ];     /// frequency count er store ...
ll start[ MAX ];   /// particular number er index store
ll ara[ MAX ];     /// input ara

ll tree[MAX * 3];

void build(ll node, ll b, ll e)
{
    if (b == e) {
        tree[node] = cnt[ ara[b] ];     /// tree node a just frequency thakbe ...
        return;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    build(Left, b, mid);
    build(Right, mid + 1, e);

    tree[node] = max(tree[Left],tree[Right]);
}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);

    return max(p1,p2);
}
//
//
//void makeTree(int nodeNumber , int s, int e )
//{
//    if( s == e )
//    {
//        sTree[ nodeNumber ] = cnt[ n[ s ] ];
//        return ;
//    }
//    int md = ( s + e ) / 2;
//    int n1 = ( 2 * nodeNumber ) + 1;
//    int n2 = n1 + 1;
//    makeTree( n1, s , md ) ;
//    makeTree( n2, md + 1, e );
//    if( sTree[ n1 ] >= sTree[ n2 ] ) sTree[ nodeNumber ] = sTree[ n1 ];
//    else sTree[ nodeNumber ] = sTree[ n2 ];
//}
//
//int makeQuery( int nodeNumber, int s, int e, int r1, int r2 )
//{
//    int ret ;
//    if( e < r1 || s > r2 ) return -1;
//    if( s >= r1 && e <= r2 ) return sTree[ nodeNumber ];
//    int n1 = ( 2 * nodeNumber ) + 1;
//    int n2 = ( 2 * nodeNumber ) + 2;
//    int md = ( s + e ) / 2;
//    int v1 = makeQuery( n1, s, md , r1, r2 );
//    int v2 = makeQuery( n2, md + 1, e, r1, r2 );
//
//    if( v1 == -1 ) ret = v2;
//    if( v2 == -1 ) ret = v1;
//    if( v1 >= v2 ) ret = v1;
//    else ret = v2;
//
//    return ret;
//}

int main()
{
// freopen("a.txt", "r", stdin);
    int i,j;
    while( scanf("%d", &N) == 1 )
    {
        if( N == 0 ) break ;
        scanf("%d", &Q);

        memset( cnt, 0, sizeof( cnt ) );
        memset( start, -1, sizeof( cnt ) ) ;

        for( i = 1; i <= N; i ++ )
        {
            scanf("%d",&ara[i]);
            //n[i] += S;
            cnt[ara[i]]++ ;
            if( cnt[ara[i]] == 1 ) start[ara[i]] = i;

        }

        build( 1, 1, N );

        int a,b;

        for( i = 1; i <= Q; i ++ )
        {
            scanf("%d %d", &a, &b);

            if( ara[a] == ara[b] )
            {
                printf("%d\n", b - a + 1 );
                continue;
            }

            int ans ;

            int v1 = cnt[ ara[a] ] - a + start[ ara[a] ];
            int v2 = b - start[ ara[b] ] + 1;

            if( v1 > v2 ) ans = v1;
            else ans = v2;

            int r1 = start[ ara[a] ] + cnt[ ara[a] ] ;
            int r2 = start[ ara[b] ] - 1;

            if( r1 <= r2 )
            {
                int var = query( 1, 1, N, r1+1, r2+1 );
                if( var > ans ) ans = var ;

            }

            printf("%d\n", ans );

        }
    }

    return 0;

}


/*


10 3
-1 -1 1 1 1 1 3 10 10 10
2 3
1 10
5 10
0

*/
