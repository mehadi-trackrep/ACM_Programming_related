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


#define pf1(a)                scanf("%d\n", a)
#define pf2(a,b)              scanf("%d %d\n",a,b)
#define pf3(a,b,c)            scanf("%d %d %d\n", a, b, c)
#define pf4(a,b,c,d)          scanf("%d %d %d %d\n", a, b, c, d)
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
#define SIZ       1000005


struct info
{
    int id;
    int point;
};

info tree[SIZ*3];
int occur[SIZ];

void build(int node,int b,int e)
{
    if(b == e)
    {
        tree[node].id = b;
        tree[node].point = 0;
        return ;
    }

    int l = node << 1;
    int r = l+1;
    int mid = (b+e) >> 1;

    build(l,b,mid);
    build(r,mid+1,e);

    tree[node] = tree[l];
}

void update(int node,int b,int e,int i,int p)
{
    if(i>e || b>i) return ; /// here j = i
    if(b == e)
    {
        tree[node].id = i;
        tree[node].point += p;
        return ;
    }
    int l = node<<1;
    int r = l+1;
    int mid = (b+e) >> 1;

    update(l,b,mid,i,p);
    update(r,mid+1,e,i,p);

    if(tree[l].point == tree[r].point)
        tree[node] = tree[l];
    else
    {
        if(tree[l].point > tree[r].point)
            tree[node] = tree[l];
        else tree[node] = tree[r];
    }
}



int main()      ///AC
{
    int tc;
    int n,q,x,p;
    sf1(tc);
    loop_tc(tc)
    {
        sf2(n,q);

        build(1,1,n);

    /// ekta id koto somoy ektana first rank a cilo,
    /// eta ber korte parley kaj sesh ... taile ans = q-oi frequency;

        memset(occur,0,sizeof(occur));

        int pre_first = 1,now_first;    /// first team theke start korte hobe ... karon , first now_first == 1 hole occur[now_first] = 1 hobe na :(
        for(int i=1; i<=q; i++)
        {
            sf2(x,p);
            update(1,1,n,x,p);
            now_first = tree[1].id;
            if(pre_first == now_first) occur[now_first]++;
            else occur[pre_first] = 0;
            pre_first = now_first;
        }
        printf("%d\n",q-occur[now_first]);
    }
    return 0;
}

/// save test cases

/**

4
5 7
4 5
3 4
2 1
1 10
4 8
3 -5
4 2

2 3
2 3
1 10
2 2

5 7
4 5
3 4
2 1
1 10
4 8
3 -5
4 2

2 3
2 3
1 10
2 2



**/


