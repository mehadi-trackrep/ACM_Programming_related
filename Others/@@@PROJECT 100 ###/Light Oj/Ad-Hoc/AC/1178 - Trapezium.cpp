#include <bits/stdc++.h>

using namespace std;

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

#define mx	1000000
#define mod	1000000007
#define INF	2147483647
#define mxn	1000


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
/// I/O End

int main()
{
    double a,b,c,d;

    int tcas;

    cin >> tcas;

    for(int i=1; i<=tcas; i++)      ///AC
    {
        cin >> a >> b >> c >> d;

        if(c > a)
        {
            double tmp = a;
            a = c;
            c = tmp;
        }

        double s,x,area_triangle,area_parallelogram,area_trapizium,h;

        x = abs(a-c);

        s = (x+b+d)/2;
        area_triangle = sqrt(s*(s-b)*(s-d)*(s-x));

        h = (2*area_triangle)/x;

        area_parallelogram = c*h;

        area_trapizium = area_triangle + area_parallelogram;

        printf("Case %d: %lf\n",i,area_trapizium);
    }

	return 0;
}

/// save test cases

/*




*/

