#include <bits/stdc++.h>
using namespace std;

class pair
{
	public:
	int x,y;
	bool operator < ( const pair& p ) const
	{
		if(x==p.x) return y<p.y;
		return x<p.x;
	}
}var[100];

int main()
{
    int n;
    cin >> n;
    vector <pair> vec;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        vec.push_back(x);
        vec.push_back(y);
    }
    sort(vec.begin(),vec.end());
    for(int i=1;i<=n;i++)
    {
        printf("%d %d\n",var[i].x,var[i].y);
    }
    return 0;
}
