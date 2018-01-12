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

#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)

/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define fd(i,a,b)           for(int i=a; i>=b; i--)

queue <int> q1;
queue <int> q2;
vector < pair < queue <int> , queue <int> > > vec;

void BFS()
{
    int fight = 0;

    while(!q1.empty() and !q2.empty())
    {
        int x = q1.front();
        int y = q2.front();

        q1.pop();
        q2.pop();

        if(x > y)
        {   q1.push(y);
            q1.push(x);
        }
        else
        {
            q2.push(x);
            q2.push(y);
        }

        if(find(vec.begin(),vec.end(),make_pair(q1,q2)) == vec.end()) vec.push_back(make_pair(q1,q2));
        else
        {
            cout << "-1\n";
            return ;
        }

        fight++;
        deb(fight);
    }

    cout << fight << ' ';

    if(!q1.empty()) cout << "1\n";
    else cout << "2\n";

    return ;
}

int main()      ///AC
{
    int n,k1,k2;
    while(cin >> n)
    {
        sf1(k1);
        fi(i,1,k1)
        {
            int x;
            cin >> x;
            q1.push(x);
        }
        sf1(k2);
        fi(i,1,k2)
        {
            int x;
            cin >> x;
            q2.push(x);
        }

        BFS();

        vec.clear();
        while(!q1.empty()) q1.pop();
        while(!q2.empty()) q2.pop();
    }

	return 0;
}

/***
/// test cases


4
2 1 3
2 4 2


***/

