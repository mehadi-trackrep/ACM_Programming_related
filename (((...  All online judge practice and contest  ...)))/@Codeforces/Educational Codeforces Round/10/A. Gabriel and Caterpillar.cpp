#include <bits/stdc++.h>
using namespace std;
//#define long long l %I64
int main()
{
    int h1,h2,a,b;
    scanf("%d%d%d%d",&h1,&h2,&a,&b);///AC
    
    int total=0;
    total = a*8 + h1;
    
    if(total >= h2)
        printf("0\n");
    else if(b >= a)
        printf("-1\n");
    else
    {
        int day = 0;
        
        for(int i=1; ; i++)
        {
            total -= b*12;
            total += a*12;
            day++;
            if(total >= h2)
            {
                printf("%d\n",day);
                break;
            }
            
        }
           
    }
    
    return 0;
}