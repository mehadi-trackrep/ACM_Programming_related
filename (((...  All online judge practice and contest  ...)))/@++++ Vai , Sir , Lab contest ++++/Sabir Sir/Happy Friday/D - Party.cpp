#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 0;

    scanf("%d", &n);

    int sup[n+5];

    for(int k = 1; k <= n; k++)     ///AC
    {
        scanf("%d",&sup[k]);
    }

    int total = 0;

    for(int k = 1; k <= n; k++)
    {

        int cnt = 1;
        int temp_sup = sup[k];

        //cerr << "--> temp_sup " << temp_sup << endl;

        while(temp_sup != -1)
        {
            temp_sup = sup[temp_sup];
            ++cnt;
        }

        //cerr << "--> cnt " << cnt << endl;

        if(cnt > total)
        {
            total = cnt;
        }
    }

    printf("%d\n", total);

    return 0;
}


/*

5
-1
1
2
1
-1

*/
