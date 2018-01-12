/*
     "BISMILLAH HIR RAHMANIR RAHIM"
     MD. MEHADI HASAN
     SHAHJALAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
*/

/// Containers Start
#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)

#define sf1(a)                scanf("%d", &a)


/// for loop

#define loop_tcas(tcas) for(int cas=1; cas<=tcas; cas++)

int main()
{
    int tcas;

    double R,r,n;

    sf1(tcas);

    loop_tcas(tcas)
    {
        scanf("%lf%lf",&R,&n);

        double angl = pi/n;

        r = (sin(angl)*R)/(sin(angl)+1);

        printf("Case %d: %.10lf\n",cas,r);
    }

	return 0;
}

/// save test cases ...

/*




*/
