#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    scanf("%d",&n);

    int total = 1,max = 1,h1,h2,m1,m2;///AC

    scanf("%d%d",&h1,&m1);

    for(int i=2; i<=n; i++){

        scanf("%d%d",&h2,&m2);

        if(h1 == h2 && m1 == m2){
            total++;
            //printf("=>%d\n",total);
            if(max < total)
                max = total;
        }
        else{
            total = 1;
        }

        h1 = h2;
        m1 = m2;

    }

    printf("%d\n",max);

    return 0;
}

/*

4
8 0
8 10
8 10
8 45

3
0 12
10 11
22 22

6
8 10
8 10
8 12
8 13
8 13
8 13


*/
