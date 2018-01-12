/*
    BISMILLAH HIR RAHMANIR RAHIM

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       /      //       #
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

//#define  loop_tcas(int n)	  for(int cas=1; cas<=n; cas++)		/// V.V.I.

#define mx	1000000
#define mod	1000000007
#define INF	INT_MAX
#define mxn	1000

bool flag;

string str,ans;
int len;

vector <string> vec;

void change_position(int i,int j)       ///AC
{
    string temp,temp1 = "",temp2 = "";
    for(int k=0; k<len; k++)
    {
        if(i == k) continue;

        if(j == k)
        {
            temp1 += str[k];
            temp1 += str[i];

            temp2 += str[i];
            temp2 += str[k];
        }
        else
        {
            temp1 += str[k];
            temp2 += str[k];
        }
    }

//    cerr << "i and j: " << i << ' ' << j << endl;
//    cerr << "temp1 , temp2: " << temp1 << ' ' << temp2 << endl;

    temp = min(temp1,temp2);
    ans = min(ans,temp);
    //vec.pb(temp);
}

int main()
{
    int T;

    cin >> T;

    while(T--)
    {
        cin >> len;
        cin >> str;

        ans = str;
        ///vec.pb(str);        /// if input is 4 AAAA / ... then function call er por vec a kono string push hoy na ...

        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len; j++)
            {
                if(str[i] != str[j])
                {
                    change_position(i,j);
                }
            }
        }
        cout << ans << endl;
        /// or,
//        sort(vec.begin(),vec.end());
//
//        cout << vec[0] << endl;
//
//        vec.clear();
    }

	return 0;
}

/// save test cases

/*




*/
