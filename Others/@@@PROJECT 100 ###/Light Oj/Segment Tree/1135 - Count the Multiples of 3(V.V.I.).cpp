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


#include <bits/stdc++.h>

using namespace std;



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
 //loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.


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
#define SIZ     	100005

struct info
{
    ll z,o,t,prop;
    info() {};    /// for default constructor
    info(ll i,ll j,ll k)
    {
        z = i;
        o = j;
        t = k;
        prop = 0;
    }
    void _rotate()
    {
        swap(z,o);
        swap(z,t);
    }
} tree[SIZ * 3];

void build(int node, int b, int e)     /// i to j range er moddhe sum ber kora...
{
    if (b == e) {
        tree[node] = info(1,0,0);
        return;
    }

    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node

    int mid = (b + e) >> 1;    /// 'b' means begin/start index and 'e' means end/finish index

    build(l, b, mid);
    build(r, mid + 1, e);

    tree[node] = info(0,0,0);
    tree[node].z = tree[l].z + tree[r].z;
}


void update(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return;
    if (b>=i && e<=j) {
        //cerr << "-->range- b and e: " << b << " " << e << endl;
        tree[node].prop++;
        tree[node]._rotate();
        return;
    }

    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node

    int mid = (b + e) >> 1;

    update(l, b, mid, i, j);
    update(r, mid + 1, e, i, j);

    tree[node].z = tree[l].z + tree[r].z;
    tree[node].o = tree[l].o + tree[r].o;
    tree[node].t = tree[l].t + tree[r].t;

    if(tree[node].prop%3 == 1) tree[node]._rotate();
    if(tree[node].prop%3 == 2) {tree[node]._rotate(); tree[node]._rotate();}
}

ll query(int node, int b, int e, int i, int j, ll carry)
{
    if (b >= i && e <= j){
        //cerr << "-->range- b and e: " << b << " " << e << endl;
        info temp = tree[node]; /// just query kortaci , no actual change in array :)
        if(carry%3 == 1) temp._rotate();
        if(carry%3 == 2) {temp._rotate(); temp._rotate();}
        return temp.z;
    }
     if (i > e || j < b)
        return 0;

    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node

    int mid = (b + e) >> 1;

    carry += tree[node].prop;

    ll p1 = query(l, b, mid, i, j, carry);
    ll p2 = query(r, mid + 1, e, i, j, carry);

    return p1 + p2;
}


int main()  ///AC
{
    int tc;
    int n,q;
    scanf("%d",&tc);
    for(int cas=1; cas<=tc; cas++)
    {
        scanf("%d %d",&n,&q);
        build(1,1,n);
        printf("Case %d:\n",cas);
        while(q--)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            b++,c++;
            if(a==0) update(1,1,n,b,c);
            else printf("%lld\n",query(1,1,n,b,c,0));
//            switch(a)
//            {
//                case 0: update(1,1,n,b,c);
//                        break;//                case 1: pf("%lld\n",query(1,1,n,b,c,0));
//                        break;
//            }
        }
    }
	return 0;
}

/***
/// test cases





***/

