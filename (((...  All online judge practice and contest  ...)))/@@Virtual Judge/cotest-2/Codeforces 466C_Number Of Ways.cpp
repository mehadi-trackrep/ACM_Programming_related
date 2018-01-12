#include <bits/stdc++.h>
using namespace std;

int a[500000];

int main()
{
    int n,sum = 0;
    
    cin >> n;
    
    for(int i=1; i<=n; i++) ///WA
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    
    if(sum % 3) printf("0\n");
    else
    {
        int val = sum/3,sum = 0,ans = 1;
        //cerr << "###" << val << endl;
        int index1,ck = 0;
        
        for(int i=1; i<=n; i++)
        {
            sum += a[i];
            
            if(sum == val)
            {
                index1 = i+1;
                //cerr << "check-i: " << i << endl;
                break;
            }
        }
        sum = 0;
        for(int i=index1; i<=n; i++)
        {
            sum += a[i];
        }
        
        if(sum == val )
        {
            printf("1");
            ck = 1;
        }
            
        else
        {
            sum = 0;
            for(int i=n; i>=0; i--)
            {
                sum += a[i];
                
                if(sum == val)
                {
                    index1 = i-1;
                    break;
                }
            }
            sum = 0;
            for(int i=index1; i>=0; i--)
            {
                sum += a[i];
                
            }
            if(sum == val )
            {
                printf("1");
                ck = 1;
            }
        }
        
        if(ck == 0)
            printf("2\n");
    }
            
       
    return 0;
}

/*

4
0 1 -1 0

9
0 0 0 0 0 0 0 0 0


*/