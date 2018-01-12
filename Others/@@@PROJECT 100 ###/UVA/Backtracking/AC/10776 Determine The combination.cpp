#include <bits/stdc++.h>
using namespace std;

#define sz 30

vector<char>result;
int taken[sz]={0};

//char arr[sz+5];
string arr;
int len,r;  /// r - combination..

void call(int ind)      ///AC
{

	if(result.size() == r)
	{
		for(int i=0;i<r;i++)
		printf("%c",result[i]);
		puts("");
		return;
	}
	for(int i=ind;i<len;i++)
	{
		if(taken[i]==0)
		{
			taken[i]=1;
			result.push_back(arr[i]);
			call(i+1);
			taken[i]=0;
			result.pop_back();
			while(arr[i] == arr[i+1] && i+1 < len) i++;  /// same char. pashapashi onek gula thakle ekti nie kaj korte hobe ... e.g: aaabbbcde
		}
	}
}

int main()
{
    while(cin >> arr >> r)
    {
        sort(arr.begin(),arr.end());        /// lexicographically dekhate hobe ... so, sort ...

        len = arr.length();

        call(0);
    }
}
