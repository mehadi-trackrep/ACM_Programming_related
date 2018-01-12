#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas,c=1;
    cin >> tcas;
    getchar();
    int a,b;
    while(tcas--)   ///AC
    {
        string str;

        getline(cin,str);

        int len = str.length();
        int ck1 = 0,ck2 = 0;

        for(int i=0; i<len; i++)
        {

            if(str[i] >= '0' && str[i] <= '9' && ck1 == 0)
            {
                int sum1 = 0;
                while(str[i] >= '0' && str[i] <= '9' && i < len)
                {
                    sum1 = sum1*10 + (str[i] - '0');
                    i++;
                }
                a = sum1;
                ck1 = 1;
            }

            if(str[i] >= '0' && str[i] <= '9' && ck2 == 0)
            {
                int sum1 = 0;
                while(str[i] >= '0' && str[i] <= '9' && i < len)
                {
                    sum1 = sum1*10 + (str[i] - '0');
                    i++;
                }
                b = sum1;
                ck2 = 1;
            }

        }
        if(ck2 == 0)
            b = 0;
        //cerr << "###" << a << ' ' << b << endl;
        double weight;

        weight = 0.5*(double)a + 0.05*(double)b;
        if(b == 0 && a%2 == 0)
            printf("Case %d: %.0lf\n",c++,weight);
        else if(b == 0 && a%2 == 1)
            printf("Case %d: %.1lf\n",c++,weight);
        else if(b % 2 == 0)
            printf("Case %d: %.1lf\n",c++,weight);
        else
            printf("Case %d: %.2lf\n",c++,weight);

    }

    return 0;
}

