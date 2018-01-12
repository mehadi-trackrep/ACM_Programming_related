/*
    BISMILLAH HIR RAHMANIR RAHIM .. "ALLAH IS ALMIGHTY" .

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       |      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
*/

//#include <bits/stdc++.h>

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
/// Containers End


using namespace std;

/// debug , template er maddhome same name er function use kora jay for different task er jonno  ...

template<class T1> void deb(T1 e1)	/// for 1 output
{
    cout<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)	/// for 2 outputs
{
    cout<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)	/// for 3 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)		/// for 4 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)		/// for 5 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)		/// for 6 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
}

/// short form ...
#define ff	        first
#define ss	        second
#define pb	        push_back
#define sf              scanf
#define pf              printf
/// pair,map, ... short form ...
#define pii         pair<int,int>
#define psi         pair<string,int>
#define pis         pair<int,string>
#define mpis        map <int,string>
#define mpii        map <int,int>
#define mpsi        map <string,int>
/// Function short form ...
#define mem(a,x) memset(a,x,sizeof(a))
#define memc(a,c) memset(a,'c',sizeof(a))	/// char memset
#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c,d)          scanf("%d %d %d %d", &a, &b, &c, &d)
#define sf1ll(a)              scanf("%lld", &a)
#define sf2ll(a,b)            scanf("%lld %lld", &a, &b)
#define sf3ll(a,b,c)          scanf("%lld %lld %lld", &a, &b, &c)
#define sf4ll(a,b,c,d)        scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

#define pf1(a)                scanf("%d\n", a)
#define pf2(a,b)              scanf("%d %d\n",a,b)
#define pf3(a,b,c)            scanf("%d %d %d\n", a, b, c)
#define pf4(a,b,c,d)          scanf("%d %d %d %d\n", a, b, c, d)
#define pf1ll(a)              scanf("%lld\n", a)
#define pf2ll(a,b)            scanf("%lld %lld\n", a, b)
#define pf3ll(a,b,c)          scanf("%lld %lld %lld\n", a, b, c)
#define pf4ll(a,b,c,d)        scanf("%lld %lld %lld %lld\n", a, b, c, d)
/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define fd(i,a,b)           for(int i=a; i>=b; i--)
///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};	/*4 side move*/
//int dy[]= {-1,1,0,0};	/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define PINF	    	2147483646.9
#define pinf	    	2147483646.9		/// positive infinite
#define NINF	    	(-1)*2147483646.9
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	100    /// node number    		// node number
#define SIZ     	500000

bool flag;
int N,E;
int l1,l2;
int twr1[105],twr2[105];
int dp[101][105];

int find_LCS(int i,int j)
{
    if(i == l1 || j == l2) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int ret;

    if(twr1[i] == twr2[j]) ret = 1+find_LCS(i+1,j+1);
    else ret = max(find_LCS(i+1,j),find_LCS(i,j+1));

    return dp[i][j] = ret;
}

vector <int> lcs;

void print_one_solution(int i,int j)    /// find_LCS function je path a giyecilo , thik se path a agabo ... :)
{
    if(i == l1 or j == l2)
    {
        fi(k,0,lcs.size()-1)
        {
            if(k == 0) cout << lcs[k];
            else cout << " " << lcs[k];
        }
        cout << endl;
        lcs.clear();
        return ;
    }
    if(twr1[i] == twr2[j])
    {
        lcs.push_back(twr1[i]);
        return print_one_solution(i+1,j+1);
    }

    if(dp[i+1][j] > dp[i][j+1]) print_one_solution(i+1,j);
    else print_one_solution(i,j+1);
}

vector <int> LcS;

void print_All_solutions(int i,int j)
{
    if(i == l1 or j == l2)
    {
        fi(k,0,LcS.size()-1)
        {
            if(k == 0) cout << LcS[k];
            else cout << " " << LcS[k];
        }
        cout << endl;
        return ;
    }

    if(twr1[i] == twr2[j])
    {
        LcS.push_back(twr1[i]);
        print_All_solutions(i+1,j+1);
        LcS.pop_back();     /// last character delete ... Evabe delete kora jabe na (V.V.I) :(

        /// if, LcS is a string data type array then the process of deletion of last character of the array :- " LcS.erase(LcS.end()-1) " (V.V.I.)
    }

    /// possible sob dikhe jete hobe ... :)
    if(dp[i+1][j] > dp[i][j+1]) print_All_solutions(i+1,j);
    else if(dp[i+1][j] < dp[i][j+1]) print_All_solutions(i,j+1);
    else
    {
        print_All_solutions(i+1,j);
        print_All_solutions(i,j+1);
    }
}

int main()
{
    int caes = 1;

    while(sf2(l1,l2) == 2)
    {
        if(!(l1+l2)) break;

        fi(i,0,l1-1) cin >> twr1[i];
        fi(j,0,l2-1) cin >> twr2[j];

        memset(dp,-1,sizeof(dp));

        int ans = find_LCS(0,0);

        printf("The length of the tower is : %d\nAnd the stones are: ",ans);

        print_one_solution(0,0);
        ///print_All_solutions(0,0);

        caes++;
    }

    return 0;
}

/// save test cases

/*


7 6
20 15 10 15 25 20 15
15 25 10 20 15 20
8 9
10 20 20 10 20 10 20 10
20 10 20 10 10 20 10 10 20
0 0


*/

