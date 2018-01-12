#include <bits/stdc++.h>
using namespace std;
#define i64 long long
int main()
{
    int t,count = 0;
    char str[65];
    int len;
    i64 r,R;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%s",str);
        len = strlen(str);
        r = 1;
        for(int i=0; i<len; i++){
            if(str[i] == 'L'){
                r *= 2;
                //printf("=>L: %lld\n",r);
            }
            else
            {
                R = 2*r+1;
                r = R;
                //printf("=>R: %lld\n",R);
            }

        }

        if(str[len-1] == 'L')
            printf("%lld\n",r);
        else
            printf("%lld\n",R);

    }

    return 0;
}

