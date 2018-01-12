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

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

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

//debug		, template er maddhome same name er function use kora jay for different task er jonno  ...

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

// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};	/*4 side move*/
//int dy[]= {-1,1,0,0};	/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/


#define mod	1000000007
#define INF	INT_MAX
#define mxn	1000
#define SIZ 1005
#define loop_tc(tc)     for(int cas=1; cas<=tc; cas++)	   /// V.V.I.

bool flag;

string str1,str2;
int len1,len2;
int M[SIZ][SIZ];
int track[SIZ][SIZ];

void init()
{
    for(int i=0; i<=len1; i++)
    {
        for(int j=0; j<=len2; j++)
        {
            M[i][j] = 0;
        }
    }
}

int find_LCS()
{
    init();

    for(int i=1; i<=len1; i++)
    {
        for(int j=1; j<=len2; j++)
        {
            if(str1[i-1] == str2[j-1])
            {
                M[i][j] = M[i-1][j-1]+1;
                track[i][j] = 'D';
            }
            else
            {
                if(M[i][j-1] >= M[i-1][j])
                {
                    M[i][j] = M[i][j-1];
                    track[i][j] = 'L';
                }
                else
                {
                    M[i][j] = M[i-1][j];
                    track[i][j] = 'U';
                }
            }
        }
    }

    return M[len1][len2];
}

void solution_print(int i,int j)        /// i and j are index
{
    if(i == 0 || j == 0) return;

    if(track[i][j] == 'D')
    {
        solution_print(i-1,j-1);
        printf("%c",str1[i-1]);     /// therefore , string er index 0 theke start so, index i-1 hoibo ...
    }
    else if(track[i][j] == 'L')
    {
        solution_print(i,j-1);
    }
    else if(track[i][j] == 'U')
    {
        solution_print(i-1,j);
    }
}

int main()
{
    cin >> str1 >> str2;

    len1 = str1.length();
    len2 = str2.length();

    int L = find_LCS();

    printf("%d\n",L);

    solution_print(len1,len2);

	return 0;
}

/// save test cases

/*




*/
