#include<cstdio>
#include<cstring>
#include<string>
#include<map>
using namespace std;
char s[100010];
int main()
{
    map<char,int>m;
    char x;
    int n,i,l,c,j,a,y;

    scanf("%d",&n);
    getchar();

    for(i=1; i<=n; i++)
    {
        c=0;
        scanf("%s",s);
        printf("Case %d: ",i);
        l=strlen(s);
        for(j=0; j<l; j++)
        {
            m[s[j]]++;
            if(m[s[j]]==1)
                c++;
        }
        y=0;
        if(c==26)
        {
            y=1;
            a=10000000;
            for(x='a'; x<='z'; x++)
            {
                if(a>m[x])
                    a=m[x];
                m[x]=0;
            }
            printf("%d\n",a);
        }
        else
            printf("0\n");
        if(y==0)
        {
            for(x='a'; x<='z'; x++)
                m[x]=0;

        }
    }

    return 0;
}
