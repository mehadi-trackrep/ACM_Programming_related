#include <bits/stdc++.h>
using namespace std;
#define ll long long
//using ll = long long;

vector <int> a;
int N;

ll merge_count(vector <int> &a)
{
    int n = a.size();

    if(n <= 1) return 0;

    ll cnt = 0;

    vector <int> b(a.begin(),a.begin()+n/2);
    vector <int> c(a.begin()+n/2,a.end());

    printf("-->b:\n");
    for(int i=0; i<b.size(); i++) printf("%d ",b[i]);
    printf("\n-->c:\n");

    for(int i=0; i<c.size(); i++) printf("%d ",c[i]);
    printf("\n");

    cnt += merge_count(b);
    cnt += merge_count(c);

    int ai(0),bi(0),ci(0);

    while(ai < n)
    {
        if(bi < b.size() && (ci == c.size() || b[bi] <= c[ci]))
        {
            a[ai++] = b[bi++];
        }
        else
        {
            cnt += (n/2 - bi);
            a[ai++] = c[ci++];
        }

        cerr << "###--> cnt: " << cnt << endl;
    }

    return cnt;
}



int main()
{
    while(cin >> N)
    {
        if(N == 0) break;
        vector <int> v;
        for(int i=1; i<=N; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        ll cnt = merge_count(v);
        printf("%lld\n",cnt);

        //for(int i=0; i<v.size(); i++) printf("%d ",v[i]);
    }

	return 0;
}

/// save test cases ...

/*

5
9
1
0
5
4
3
1
2
3
0

5
9 1 0 5 4

*/

