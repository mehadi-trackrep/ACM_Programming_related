#include <bits/stdc++.h>
using namespace std;
char str[1010];
int len;

int check_pallindrome()
{
    int i;
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t,ck1,i,ck2,c=1;
    scanf("%d",&t);
    //getchar();
    while(t--)
    {
        scanf("%s",str);
        len = strlen(str);
        ck1 = 0;
        for(i=0;i<len;i++)
        {
            if(str[i]=='A' || str[i]=='M' || str[i]=='O' || str[i]=='T' || str[i]=='U' || str[i]=='V' ||
               str[i]=='W' || str[i] == 'I' || str[i] == 'H'){
                continue;
            }
            else
            {
                printf("Case %d: usual word\n",c++);
                ck1 = 1;
                break;
            }
        }
        if(ck1 == 0)
        {
            ck2 = check_pallindrome();
            if(ck2 == 1)
                printf("Case %d: SameSymWord\n",c++);
            else
                printf("Case %d: SymWord\n",c++);
        }
    }

    return 0;
}



/// ||
