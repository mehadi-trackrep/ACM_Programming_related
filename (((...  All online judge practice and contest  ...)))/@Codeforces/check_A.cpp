#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;

    //while(1){
    scanf("%d%d%d",&a,&b,&c);

    if(c%a == 0 || c%b == 0)
        printf("Yes\n");
    else{
        int i = 1,ck = 0,subs;
        subs = c-a;
        while(subs >= 1){
            if(subs%b==0){
                printf("Yes\n");
                ck = 1;
                break;
            }
            subs -= a;
        }
        if(ck == 0)
            printf("No\n");
    //}
    }
    return 0;
}

