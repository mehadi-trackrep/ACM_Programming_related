#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas,c = 1;
    double taka;
    cin >> tcas;
    while(tcas--)
    {
        cin >> taka;
        if(taka <= 180000)
            printf("Case %d: 0\n",c++);
        else
        {
            double tax=0;
            taka-=180000;
            if(taka>0)
            {
                if(taka>300000)
                    tax+=30000;
                else tax+=(taka*0.1);
                
                taka-=300000;
                
                if(taka>0)
                {
                    if(taka>400000)
                        tax+=60000;
                    else tax+=(taka*0.15);
                    taka-=400000;
                    if(taka>0)
                    {
                        if(taka>=300000)
                            tax+=60000;
                        else tax+=(taka*0.2);
                        taka-=300000;
                        if(taka>0)
                            tax+=(taka*0.25);
                    }
                }
            }
            tax = ceil(tax);
            if(tax>0 && tax<=2000)
                printf("Case %d: 2000\n",c++);
            else if(tax>2000)
                printf("Case %d: %.0lf\n",c++,tax);
                
        }
        
    }
    return 0;
}

/*

3
180001
12345
615000

*/