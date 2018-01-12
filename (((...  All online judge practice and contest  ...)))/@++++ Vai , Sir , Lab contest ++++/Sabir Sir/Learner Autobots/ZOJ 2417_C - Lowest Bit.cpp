#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(cin >> x) ///AC
    {
        if(x == 0)
            break;
        int ara[100000];

        int k=0;

        while(x != 0)
        {
            ara[k++] = x%2;
            x /= 2;
        }
        int cnt = 0;
        for(int j = 0; j < k; j++)
        {
            if(ara[j] == 1)
            {

                break;
            }
            else
            {
                cnt++;
            }
        }

        printf("%d\n",(int)pow(2,(double)cnt));
    }

    return 0;
}
