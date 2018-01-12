#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,D;
    while(cin >> A >> D)
    {
        if(A == 0 && D == 0) break; ///AC
        int a[10005],l1,l2;
        for(int i=1; i<=A; i++)
        {
            scanf("%d",&a[i]);
        }

        int x;

        vector <int> vec;

        vec.clear();

        for(int i=1; i<=D; i++)
        {
            scanf("%d",&x);
            vec.push_back(x);
        }

        int ck=0;

        sort(vec.begin(),vec.end());

        l1 = vec[0];
        l2 = vec[1];

        for(int i=1; i<=A; i++)
        {
            if(a[i] < l2)
            {
                ck = 1;
                break;
            }
        }
        if(ck == 1) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}

/*

2 3
500 700
700 500 500
2 2
200 400
200 1000
3 4
530 510 490
480 470 50 310
0 0

*/


