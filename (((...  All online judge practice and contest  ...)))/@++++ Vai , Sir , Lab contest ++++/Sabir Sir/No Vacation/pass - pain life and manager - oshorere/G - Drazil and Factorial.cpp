#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<cmath>
#include<stdlib.h>
#include<iomanip>
#include<list>
#include<deque>
#include<map>

#include <stdio.h>
#include <queue>
#include <stack>
#define maxn 10000+5
#define ull unsigned long long
#define ll long long
#define reP(i,n) for(i=1;i<=n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define cle(a) memset(a,0,sizeof(a))
#define mod 90001
#define PI 3.141592657
#define INF 1<<30
const ull inf = 1LL << 61;
const double eps=1e-5;

using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

//int a[10]={0,1,2,6,24,120,720,5040,40320,362880};
/*
4!=2!*2!*3!
6!=123456=5!*3!
8!=12345678=7!*2!*2!*2!
9!=123456789=7!*2!*3!*3!
*/

int a;
char s[40];

vector<int>v;       ///AC

int main()
{
    int n;
    cin>>n;
    cin>>s;
    for(int i=n-1;i>=0;i--)
	{
		a=(int)(s[i]-'0');
		if(a==0||a==1)continue;
		if(a==4)v.push_back(2),v.push_back(2),v.push_back(3);
		else if(a==6) v.push_back(5),v.push_back(3);
		else if(a==8)v.push_back(7),v.push_back(2),v.push_back(2),v.push_back(2);
		else if(a==9)v.push_back(7),v.push_back(3),v.push_back(2),v.push_back(3);
		else v.push_back(a);
	}

	sort(v.begin(),v.end());

	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i];

	cout<<endl;

    return 0;
}
