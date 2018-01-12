#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;

    cin >> tcas;

    while(tcas--)       ///AC
    {
        int N;

        cin >> N;

        int ara1[100];
        int ara2[100];

        for(int i=1; i<=N; i++)
        {
            scanf("%d",&ara1[i]);
        }

        int q = 1,stk = 1;

        for(int i=1; i<=N; i++)
        {
            scanf("%d",&ara2[i]);

            if(ara1[i] != ara2[i]) q = 0;

            if(ara1[N-i+1] != ara2[i]) stk = 0;

        }

        if(q == 1 && stk == 1) printf("both\n");
        else if(q == 0 && stk == 0) printf("neither\n");
        else if(q == 1) printf("queue\n");
        else printf("stack\n");
    }

    return 0;
}

/*

4
3
1 2 3
3 2 1
3
1 2 3
1 2 3
3
1 2 1
1 2 1
3
1 2 3
2 3 1

*/
