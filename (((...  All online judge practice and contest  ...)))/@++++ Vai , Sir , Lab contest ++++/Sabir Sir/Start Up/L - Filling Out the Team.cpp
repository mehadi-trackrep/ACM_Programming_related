#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    while(cin >> a >> b >> c)
    {
        int ck1 = 0,ck2 = 0,ck3 = 0,count = 0;
        
        if(a == 0 && b == 0 && c == 0)
            break;
        if(a <= 4.5 && b >= 150 && c >= 200)
        {
            ck1 = 1;
            count++;
        }
        if(a <= 6 && b >= 300 && c >= 500)
        {
            ck2 = 1;
            count++;
        }
        if(a <= 5 && b >= 200 && c >= 300)
        {
            ck3 = 1;
            count++;
        }
        
        if(ck1 == 0 && ck2 == 0 && ck3 == 0)
            printf("No positions\n");
            
        else
        {
            if(count == 3)
                printf("Wide Receiver Lineman Quarterback\n");
            else if(count == 2)
            {
                if(ck1 == 1 && ck2 == 1)
                    printf("Wide Receiver Lineman\n");
                else if(ck1 == 1 && ck3 == 1)
                    printf("Wide Receiver Quarterback\n");
                else if(ck2 == 1 && ck3 == 1)
                    printf("Lineman Quarterback\n");
            }
            else if(count == 1)
            {
                if(ck1 == 1)
                    printf("Wide Receiver\n");
                else if(ck2 == 1)
                    printf("Lineman\n");
                else if(ck3 == 1)
                    printf("Quarterback\n");
            }
        }
        
    }
    
    return 0;
}