
#include <bits/stdc++.h>
using namespace std;        ///AC

int main()
{
    int t;
    int xp = 1;
    scanf("%d",&t);

    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long a = sqrt(n);
        long long x,y;

        if(a&1)
        {
            if(n == a*a)
            {
                y = a;
                x = 1;
            }
            else
            {
                y = a+1;
                x = n-a*a;
                if(x > a+1)
                {
                    y -= (x-a)-1;
                    x = a+1;
                }
            }

        }
        else
        {
            if(n == a*a)
            {
                x = a;
                y = 1;
            }
            else
            {
                x = a+1;
                y = n-a*a;
                if(y > a+1)
                {
                    x -= (y-a)-1;
                    y = a+1;
                }
            }
        }

        printf("Case %d: %lld %lld\n",xp++,x,y);
    }
}

    /// nicher code a ki vul seta ekhono paoa jay ni:-

//
//
///*
//     BISMILLAH HIR RAHMANIR RAHIM
//*/
//
///// Containers Start
//#include <bits/stdc++.h>
//using namespace std;
//
//
//#define PI                    acos(-1.0)
//#define Pi                    3.141592653589793
//
//#define SET(a)                memset( a, -1,    sizeof a )
//#define CLR(a)                memset( a,  0,    sizeof a )
//#define MEM(a,val)            memset( a,  val,  sizeof(a) )
//
//#define ll                    long long
//#define mod                   1000000007
//#define INF                   2147483647
//
//
///// I/O Start
//#define sf                    scanf
//#define pf                    printf
//
//#define sf1(a)                scanf("%d", &a)
//#define sf2(a,b)              scanf("%d %d",&a, &b)
//#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
//#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)
//
//#define sf1ll(a)              scanf("%I64d", &a)
//#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
//#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
//#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
//
//#define READ                  freopen("input.txt", "r", stdin);
//#define WRITE                 freopen("output.txt", "w", stdout);
///// I/O End
//
//#define debug(x) cout << "> " << #x << " = " << x << endl;
//#define Max 10000001;
//
////#define loop_tcas(tcas) for(int cas=1; cas<=tcas; cas++)
//
//int main()
//{
//    int tcas;
//    ll n,sq;
//
//    sf1(tcas);
//
//    for(int cas=1; cas<=tcas; cas++)
//    {
//        sf1ll(n);
//
//        sq = sqrt(n);
//
//        if(sq & 1) /// means sq value ti odd hole ...
//        {
//            ll r,c;    /// r == row , c == column
//
//            if(sq*sq == n)
//            {
//                r = sq;
//                c = 1;
//            }
//            else
//            {
//                r = sq+1;
//                c = n-sq*sq;
//
//                if(c > sq+1)
//                {
//                    r -= (c-sq)-1;    /// ekhane c er value hocce n-sq*sq
//                    c = sq+1;       /// orthat age je row  paicilam seta ekhob column hoye jabe ...
//                }
//            }
//            //cerr << "odd: sq-> " << endl;
//            printf("Case %d: %lld %lld\n",cas,c,r);
//        }
//        else    /// ekhetere odd er ulta: c er jagay r and r er jagay c ...
//        {
//            ll r,c;
//
//            if(sq*sq == n)
//            {
//                c = sq;
//                r = 1;
//            }
//            else
//            {
//                c = sq+1;
//                r = n-sq*sq;
//
//                if(r > sq+1)
//                {
//                    c -= (r-sq)-1;
//                    r = sq+1;   /// orthat age je column(c)  paicilam seta ekhob row hoye jabe ...
//                }
//            }
//
//            printf("Case %d: %lld %lld\n",cas,c,r);
//        }
//    }
//
//	return 0;
//}
//
///// save test cases ...
//
///*
//
//
//
//
//*/
