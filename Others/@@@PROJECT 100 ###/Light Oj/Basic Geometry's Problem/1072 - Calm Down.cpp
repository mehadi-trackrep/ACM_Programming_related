/*
     "BISMILLAH HIR RAHMANIR RAHIM"
     MD. MEHADI HASAN
     SHAHJALAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
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


int main()
{
	int tcas;

	cin >> tcas;

	for(int i=1; i<=tcas; i++)  ///AC
	{
	    double R,n;

	    scanf("%lf%lf",&R,&n);

	    double angl = pi/n;

	    double r = ((sin(angl))*R)/(1+sin(angl));

	    printf("Case %d: %lf\n",i,r);

	}

	return 0;
}

/// save test cases ...

/*




*/
