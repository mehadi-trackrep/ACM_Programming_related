/*
     BISMILLAH HIR RAHMANIR RAHIM
*/

/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>

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
    int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int fact[26],i,j,n,count1,x,ck,count2 = 25;

    int tcas;

    cin >> tcas;

    for(int c=1; c<=tcas; c++)
    {
        scanf("%d",&n);

        printf("Case %d: %d = ",c,n);

        memset(fact,0,sizeof(fact));

        count2 = 0;

        for(i = n;i >= 2;i--){
            x = i;
            for(j = 0;j < 25;j++){
                count1 = 0;
                ck = 0;
                while(x % prime[j] == 0){
                    x /= prime[j];
                    count1++;
                    ck = 1;
                }
                if(ck == 1){
                    fact[j] += count1;
                    count2++;
                }
            }
        }


        for(i = 0;fact[i] != 0 && i < 25;i++){
            if(i == 0)
                printf("%d (%d)",prime[i],fact[i]);
            else printf(" * %d (%d)",prime[i],fact[i]);
        }
        printf("\n");
    }

    return 0;
}


/// save test cases

/*




*/
