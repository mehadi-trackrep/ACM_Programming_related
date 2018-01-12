#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;

//    int ara[148];
//
//    memset(ara,0,sizeof(ara));
//
//    for(int i=1; i<=12; i++)
//    {
//        ara[i*i] = 1;
//    }

    int store[2013];

    memset(store,0,sizeof(store));  ///AC

    for(int i=1; i<=2009; i++)
    {
        if(i <= 999)
        {
            double ck = sqrt((double)i);
            int ck1 = (int)ck;
            if(ck - ck1 == 0 && ck <= 12)
            {
                store[i] = 1;
                //cerr << " i<999 ===" << " i: " << i <<  endl;
                continue;
            }
        }

        if(i >= 100){
            int sum = 0;
            int x = i;

            sum += (x%10);
            x /= 10;
            sum += (x%10)*10;
            if(sum != 0)
            {
                double ck = sqrt((double)sum);
                int ck1 = (int)ck;
                if(ck - ck1 == 0 && ck <= 12){
                    store[i] = 1;
                    //cerr << " 1. ===" << " i: " << i << endl;
                    continue;
                }
            }

            x/=10;
            sum += (x%10)*100;
            if(sum == 0) continue;
            double ck = sqrt((double)sum);
            int ck1 = (int)ck;
            if(ck - ck1 == 0 && ck <= 12)
            {
                store[i] = 1;
                //cerr << "2. ==="<< " i: " << i  << endl;
            }

        }
    }

    cin >> tcas;

    while(tcas--)
    {
        int x,y;
        int cnt = 0;

        cin >> x >> y;

        for(int i=x; i<=y; i++)
        {
            if(store[i] == 1) cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}

/*

2
2009 2009
81 100

*/



