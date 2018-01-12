#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        int sum = 0;
        if(n/2 >= m) printf("%d\n",m);
        else if(n*2 <= m) printf("%d\n",n); ///AC
        else printf("%d\n",(n+m)/3);
    }

	return 0;
}

/// save test cases ...

/*

2 6
4 5


*/
