#include <iostream>
using namespace std;

int main() {
	int tcas;
	cin >> tcas;
	while(tcas--)
	{
	    int N,k;

	    cin >> N >> k;

	    int ara[100];

	    for(int i=1; i<=N; i++) scanf("%d",&ara[i]);

	    for(int i=1; i<=N; i++)
	    {
	        for(int j=i+1; j<=N; j++)
	        {
	            int temp;
	            if(ara[i] < ara[j])
	            {
	                temp = ara[i];
	                ara[i] = ara[j];
	                ara[j] = temp;
	            }
	        }
	    }

	    for(int i=1; i<=k; i++)
	    {
	        if(i < k) printf("%d ",ara[i]);
	        else printf("%d\n",ara[i]);
	    }

	}

	return 0;
}
