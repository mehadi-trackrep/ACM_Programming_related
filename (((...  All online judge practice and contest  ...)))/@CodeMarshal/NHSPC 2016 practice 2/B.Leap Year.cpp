#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count = 0;
    scanf("%d",&t);
    int y1,y2;
    while(t--)
    {
        count = 0;
        scanf("%d%d",&y1,&y2);
        if(y1 > y2)
        {
            y1 = y1^y2;
            y2 = y1^y2;
            y1 = y1^y2;
        }
        for(int i=y1; i<=y2; i++)
        {
            if(i%4 == 0)
            {
                if(i%100 == 0)
                {
                    if(i%400 == 0)
                        count++;
                    else ;
                }
                else
                    count++;
            }
            else ;
        }

        printf("%d\n",count);
    }

    return 0;
}
