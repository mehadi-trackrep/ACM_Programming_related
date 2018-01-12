#include <bits/stdc++.h>
using namespace std;

char arr[]={'a','b','c','d'};
vector<char>result;
int taken[20]={0};
void rec(int ind)
{
    //if(ind >= 5) return;

	if(result.size()==3)
	{
		for(int i=0;i<3;i++)
            printf("%c",result[i]);
		puts("");
		return;
	}

	for(int i=ind;i<4;i++)
	{
		if(taken[i]==0)
		{
			taken[i]=1; result.push_back(arr[i]);
			rec(ind+1);
			taken[i]=0; result.pop_back();
		}
	}
}


int main()
{
	rec(0);
}
