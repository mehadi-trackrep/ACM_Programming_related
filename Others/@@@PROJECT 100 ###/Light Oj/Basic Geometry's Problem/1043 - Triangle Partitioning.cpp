/*
     "BISMILLAH HIR RAHMANIR RAHIM"
     MD. MEHADI HASAN     SHAHJALAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
*/

#include <bits/stdc++.h>
using namespace std;


#define PI                    acos(-1.0)
#define Pi                    3.141592653589793
#define pi                    acos(-1.0)

#define SET(a)                memset( a, -1,    sizeof a )
#define CLR(a)                memset( a,  0,    sizeof a )
#define MEM(a,val)            memset( a,  val,  sizeof(a) )

#define ll                    long long
#define mod                   1000000007
#define INF                   2147483647


/// I/O Start
#define sf                    scanf
#define pf                    printf

#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)

#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);

#define debug(x) cout << "> " << #x << " = " << x << endl;
#define Max 10000001
#define mx 10000001
#define mxn 100		/// means maximum node number ...

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)

#define for_in(a) for(int i=1; i<=a; i++)
#define for_de(a) for(int i=a; i>=0; i--)


int main()
{
    int tcas;

    sf1(tcas);

    for_in(tcas)
    {
        double AB,AC,BC,ratio_ADE_BDEC;

        scanf("%lf%lf%lf%lf",&AB,&AC,&BC,&ratio_ADE_BDEC);      ///AC

        double y = ratio_ADE_BDEC;

        double p = y/(1+y);

        double AD = AB*sqrt(p);

        printf("Case %d: %lf\n",i,AD);
    }

	return 0;
}

/// save test cases ...

/*


*/
