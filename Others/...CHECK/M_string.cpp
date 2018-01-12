#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int const MAX = 1e5 + 5;

char s1[MAX], s2[MAX];
int main()
{
    scanf("%s", s1);
    memcpy(s2, s1, sizeof(s1));
    int len = strlen(s1);
    bool f1 = false;
    bool f2 = false;
    for(int i = 0; i < len; i++)
    {
        if(s1[i] == 'A' && s1[i + 1] == 'B')
        {
            f1 = true;
            s1[i] = s1[i + 1] = '*';
            break;
        }
    }
    for(int i = 0; i < len; i++)
        if(s1[i] == 'B' && s1[i + 1] == 'A')
            f2 = true;
    if(f1 && f2)
    {
        printf("YES\n");
        return 0;
    }
    f1 = f2 = false;
    for(int i = 0; i < len; i++)
    {
        if(s2[i] == 'B' && s2[i + 1] == 'A')
        {
            f1 = true;
            s2[i] = s2[i + 1] = '*';
            break;
        }
    }
    for(int i = 0; i < len; i++)
        if(s2[i] == 'A' && s2[i + 1] == 'B')
            f2 = true;
    if(f1 && f2)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
}
