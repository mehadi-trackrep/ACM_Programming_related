#include <cstdio>

using namespace std;        ///AC

int main()
{
	int tc;
	scanf("%d",&tc);
	for(int c=1; c<=tc; c++)
	{
	    int n,L,R;
	    scanf("%d%d%d",&n,&L,&R);
	    int ans = 0;
	    for(int i=L; i<=R; i++)
        {
            ans += (n/i);
        }
        printf("%d\n",ans);
	}
    return 0;
}

/// save test cases

/*




*/


