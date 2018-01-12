#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;

    cin >> tcas;

    while(tcas--)   ///AC
    {
        int N;
        cin >> N;
        int Max = 0;
        int ind;

        int ara[100];

        for(int i=1; i<=N; i++)
        {
            scanf("%d",&ara[i]);

            if(Max < ara[i]){
                Max = ara[i];
                ind = i;
            }
        }
        //cerr << "MAX: " << Max << " ind: " << ind << endl;
        int M = 0;
        int ind1;

        for(int i=1; i<=N; i++)
        {
            if(M < ara[i] && i != ind){
                M = ara[i];
                ind1 = i;
            }
        }

        printf("%d %d\n",ind,M);
    }

    return 0;
}

/*

2
3
3 2 1
2
4 9

*/


