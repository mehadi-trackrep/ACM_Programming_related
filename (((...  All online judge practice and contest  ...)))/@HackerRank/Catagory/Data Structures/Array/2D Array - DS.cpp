#include <iostream>
using namespace std;


int main(){

    int ara[10][10];

    int t,k1,k2,sum = 0,total_max = -2147483647;    ///AC

    for(int i=1; i<=6 ;i++)
    {
        for(int j=1; j<=6; j++)
            cin >> ara[i][j];
    }

    for(int i=1; i<=4 ;i++)
    {
        for(int j=1; j<=4; j++)
        {
            sum = 0;

            t = 3;
            k1 = i;
            k2 = j;

            while(t--)
            {
                sum += ara[k1][k2++];
            }

            sum += ara[i+1][j+1];

            t = 3;
            k1 = i+2;
            k2 = j;

            while(t--)
            {
                sum += ara[k1][k2++];
            }
            //cerr << "===" << sum << endl;
            if(sum < 0 && total_max < 0)
            {
                sum *= (-1);
                total_max *= (-1);
                if(sum < total_max)
                    total_max = sum*(-1);
                else
                    total_max *= (-1);
                //cerr << "total_max: " << total_max << endl;
            }
            else if(sum >= 0 && total_max < 0)
                total_max = sum;
            if(sum >= 0 && total_max >= 0)
            {
                if(sum > total_max)
                    total_max = sum;
            }
        }

    }

    cout << total_max << endl;

    return 0;
}

/*

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

-1 -1 0 -9 -2 -2
-2 -1 -6 -8 -2 -5
-1 -1 -1 -2 -3 -4
-1 -9 -2 -4 -4 -5
-7 -3 -3 -2 -9 -9
-1 -3 -1 -2 -4 -5

output: -6

*/
