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
    int N;

    cin >> N;

    for(int c=1; c<=N; c++)
    {
        string S,T;
        cin >> S >> T;
        int len1,len2;
        len1 = S.length();
        len2 = T.length();

        set <string> st1,st2,st;

//        st1.clear();
//        st2.clear();
//        st.clear();

        string a,b,str;
        int ind;
        int i,j,k,x=1;

        for(i = 0;i < len1;i++){
            ind = 0;
            for(j = 0;j < x;j++)
            {
                a[ind] = S[j];
                ind++;
            }
            a[ind] = '\0';
            cerr << "=>a: " << a << endl;
            st1.insert(a);
            x++;
        }

        x = 1;

        for(i = 0;i < len2;i++){
            ind = 0;
            for(j = i;j < len2;j++)
                a[ind++] = T[j];
            a[ind] = '\0';
            cerr << "->a: " << a << endl;
            st2.insert(a);
            x++;
        }

        set <string> :: iterator it;
        set <string> :: iterator it1;

        for(it = st1.begin(); it!=st1.end(); it++)
        {
            a = *it;
            cerr << "=> a: " << a << endl;
            for(it1 = st2.begin(); it1!=st2.end(); it1++)
            {
                b = *it1;
                str = a+b;
                cerr << "--> str: " << str << endl;
                st.insert(str);
            }
        }

        long long val = (st.size()% mod);

        printf("Case #%d: %lld\n",c,val);
    }

	return 0;
}

/// save test cases

/*

3
TTGGAAGC
ATAGCCCTAA
TTTA
CGAC
GACGTCTC
CA


*/
