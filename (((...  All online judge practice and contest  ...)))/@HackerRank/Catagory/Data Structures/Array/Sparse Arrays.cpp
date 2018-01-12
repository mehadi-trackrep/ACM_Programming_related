#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>         ///AC
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long
#define M 100

int main()
{
    int N,Q;

    scanf("%d\n",&N);

    map <string,int> mp;
    string str;

    for(int i=1; i<=N; i++)
    {
        cin >> str;
        mp[str]++;
    }

    scanf("%d\n",&Q);

    for(int i=1; i<=Q; i++)
    {
        cin >> str;
        cout << mp[str] << endl;
    }

    return 0;
}

/*

4
aba
baba
aba
xzxb
3
aba
xzxb
ab

*/
