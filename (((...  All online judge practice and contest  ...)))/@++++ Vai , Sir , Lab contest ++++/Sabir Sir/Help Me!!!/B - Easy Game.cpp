#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cas=1; cas<=tc; cas++)      ///AC
    {
        char str[10090];
        scanf("%s",str);
        int len = strlen(str);
        if(len%2 == 1) printf("Case %d: Odd\n",cas);
        else printf("Case %d: Even\n",cas);
    }
    return 0;
}
