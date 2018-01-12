#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ope[10];
    int t,n,amount,total,c=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getchar();
        total = 0;
        printf("Case %d:\n",c++);
        while(n--){
            //scanf("%s%d",ope,&amount);
            cin >> ope;
            if(strcmp(ope,"donate") == 0){
                cin >> amount;
                total += amount;
            }
            else
                printf("%d\n",total);
        }
    }

    return 0;
}
