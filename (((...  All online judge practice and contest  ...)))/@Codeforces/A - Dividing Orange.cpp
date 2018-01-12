#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    int a[35],vis[905];
    
    memset(vis,0,sizeof vis);
    
    for(int i=0; i<k; i++)
    {
        scanf("%d",&a[i]);
        vis[a[i]] = 1;
    }
    int x1,x2,count = 0,value,index = 0;
    x1 = k;
    while(x1--)
    {
        //value = a[index++];
        x2 = 1;
        count = 0;
        printf("%d",a[index++]);
        for(int i=1; ; i++)
        {
            if(vis[x2] != 1)
            {
                printf(" %d",x2) ;
                vis[x2] = 1;
                count++;
            }
            if( (count == n-1) || n == 1)
                break;
            x2++;
        }
        
        printf("\n");
    }
       
    return 0;
}

/*

3 3
1 4 7

*/