#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  n , m;   ///AC
    int c=1;
    int tcas;
    cin >> tcas;
    while(tcas--)
    {
        cin >> n >> m;
        long long total = n*m/2;    /// every +sum,-sum mile ekta set dhorle , total sum hobe n/m ti so, total set hobe = (n/m)/2 = n/(2*m)
                                    /// now , first set er jonno , where m=3 => -1-2-3 + 4+5+6 ==> (4-1)+(5-2)+(6-3) = m ti m paici , ekta set er jonno...
                                    /// so, n/(2*m) ti set er jponno sum pabo = (n*m)/2
        printf("Case %d: %lld\n",c++,total);
    }

    return 0;
}
