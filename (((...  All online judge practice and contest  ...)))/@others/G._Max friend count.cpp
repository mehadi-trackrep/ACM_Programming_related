#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main()
{
    int t,town,citizens,i,x;
    int A,B,count = 0;
    scanf("%d",&t);
    set < int > s;
    while(t--)
    {
        scanf("%d%d",&town,&citizens);
        count = 0;
        for(i = 0; i < citizens; i++)
        {
            x = 2;
            while(x--)
            {
                scanf("%d%d",&A,&B);
                s.insert(A);
                s.insert(B);
            }
        }

        while (!s.empty())
        {
            count++;
            s.erase(s.begin());
        }

        printf("%d\n",count);
    }

    return 0;
}
