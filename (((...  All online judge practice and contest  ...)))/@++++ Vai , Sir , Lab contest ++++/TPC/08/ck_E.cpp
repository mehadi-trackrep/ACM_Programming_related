#include <bits/stdc++.h>
using namespace std;
#define mod     1000000007
#define sz      100005
#define pi      acos(-1)
#define ll      long long
#define pb      push_back
#define pp      pop_back
#define pii     pair<int, int>
#define xx      first
#define yy      second
#define siz(x)  x.size()
#define mem(x)  memset(x,0,sizeof x)
#define sf      scanf
#define pf      printf

int a1[30000006],a2[30000006];


int main()
{

//    freopen("abc.in", "r", stdin);
//    freopen("abc.out", "w", stdout);
//
    int n,k;
    set<int>st;
    set<int>::iterator it1,it2,it3;


    scanf("%d",&n);
    map<int,int>mp;

    int in[3550],i,j;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&k);
        //st.insert(k);
        in[i]=k;
        if(k>=0) a1[k]++;
        else
        {
            k=k*-1;
            a2[k]++;
        }
    }


    int cnt=0,a,b;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            a=in[i],b=in[j];
            //cout <<i <<" "<<j<<" "<<a<<" "<<b<<endl;
            if(i==j) continue;
            cerr << "--> i and j: " << i << " " << j << endl;

            if(a+b>=0)
            {
                cnt+=a1[a+b];
                cerr << "==> cnt: " << a1[a+b] << endl;
            }
            else
            {
                k=(a+b)*-1;
                cnt+=a2[k];
                cerr << "++> cnt: " << a2[k] << endl;
            }
            if(a+b==a) cnt--;
            if(a+b==b) cnt--;
        }
    }
    printf("%d\n",cnt);



}
