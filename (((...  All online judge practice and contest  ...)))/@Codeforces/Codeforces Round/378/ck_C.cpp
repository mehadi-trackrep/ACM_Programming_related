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

/// debug , template er maddhome same name er function use kora jay for different task er jonno  ...

template<class T1> void deb(T1 e1)	/// for 1 output
{
    cerr<< "--> "<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)	/// for 2 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)	/// for 3 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)		/// for 4 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)		/// for 5 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)		/// for 6 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
}
// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};	/*4 side move*/
//int dy[]= {-1,1,0,0};	/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

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
#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c,d)        scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define pf1(a)                printf("%d\n", a)
#define pf2(a,b)              printf("%d %d\n",a,b)
#define pf3(a,b,c)            printf("%d %d %d\n", a,b,c)
#define pf4(a,b,c,d)          printf("%d %d %d %d\n",a,b,c,d)
#define pf1ll(a)              printf("%I64d\n",a)
#define pf2ll(a,b)            printf("%I64d %I64d\n",a,b)
#define pf3ll(a,b,c)          printf("%I64d %I64d %I64d\n",a,b,c)
#define pf4ll(a,b,c,d)        printf("%I64d %I64d %I64d %I64d\n",a,b,c,d)

/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define fd(i,a,b)           for(int i=a; i>=b; i--)

/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define PINF	    	9999999999
#define pinf	    	9999999999		/// positive infinite
#define NINF	    	(-1)*INT_MAX
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	1000        		// node number
#define SIZ     	500000
#define MOD         1000000007

//ll bigmod(ll base,ll pow,ll m){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%m;base = (base*base)%m;pow >>= 1;}return ret;}

//ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}
//ll GCD(ll a,ll b){if(b == 0)return a; return GCD(b,a%b);}
//ll LCM(ll a,ll b) {return a*(b/GCD(a,b));}

int b[1000];

int main()
{
    int n,k;
    deque <int> dq,q;
    sf1(n);
    int sa=0;
    fi(i,1,n)
    {
        int a;
        sf1(a);
        dq.push_back(a);
        q.push_back(a);
        sa += a;
    }
    sf1(k);
    vector <int> v;
    int sb = 0;
    fi(i,1,k)
    {
        int bi;
        sf1(bi);
        v.push_back(bi);
        sb += bi;
        b[i-1] = bi;
    }
    if(sa != sb) {pf("NO\n");return 0;}

    vector<int> ans1;
	vector<char> ans2;
	///.............................................................


    fi(i,0,k-1)
    {
        int bi = v[i];
        vector <int> ckv;
        int sum = 0;
        while(dq.size() and sum < v[i])
        {
            ckv.push_back(dq.front());
            sum += dq.front();
            dq.pop_front();
        }
        if(sum != bi) {pf("NO\n");return 0;}
        int l = ckv.size();
        if(l == 1) continue;
        int mxval = *max_element(ckv.begin(),ckv.end());
        bool flag=false,left=false,right=false;
        fi(j,0,l-1)
        {
            //deb(l);
            ///deb(mxval);
            if(ckv[j] != mxval) continue;
            if(j-1>=0 and ckv[j-1]<mxval) left = true;
            if(j+1 < l and ckv[j+1]<mxval) right = true;
            if(!left and !right) continue;
            flag = true;
            int pos = j+1;
            if(left)
            {
                deb(mxval);
                fi(ii,0,j-1)
                {
                    ans1.push_back(i+pos);
                    ans2.push_back('L');
                    pos--;
                }
                fi(ii,j+1,l-1) /// ekhettere movement position constant
                {
                    ans1.push_back(i+pos);
                    ans2.push_back('R');
                }
            }
            else
            {
                //deb(mxval);
                fi(ii,j+1,l-1) /// ekhettere movement position constant
                {
                    ans1.push_back(i+pos);
                    ans2.push_back('R');
                }
                fi(ii,0,j-1)
                {
                    ans1.push_back(i+pos);
                    ans2.push_back('L');
                    pos--;
                }
            }
            break;
        }
        if(!flag) {pf("NO\n");return 0;}
    }
    pf("YES\n");
    fi(i,0,ans1.size()-1)
    {
        cout << ans1[i] << " " << ans2[i] << endl;
    }
	return 0;
}

/***
/// test cases


6
1 1 3 2 3 2
2
7 5


6
1 2 2 2 1 2
2
5 5

100
141740 887543 358725 815709 992416 392186 685184 777321 635144 303469 163867 947765 682887 263329 443102 659012 234533 892907 567858 930718 519184 255653 469925 535821 534679 203563 301546 471137 941549 670880 913686 685229 272364 318182 393061 187847 443599 929513 905906 766412 251638 99669 842754 884697 245798 583195 446970 400787 6407 333233 312484 59232 451492 844239 489071 756204 369774 388530 891180 967333 735737 470620 715794 739136 521854 57490 66810 89522 755416 709597 903971 132471 963975

***/

