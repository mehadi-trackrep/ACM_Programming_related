#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) && n != 0)
    {
        queue <int> q;
        for(int i = 1;i <= n;i++)
            q.push(i);
        if(n > 1)
            printf("Discarded cards: ");
        else
            printf("Discarded cards:");
        while(q.size() != 1)
        {
            if(q.size() > 2)
                printf("%d, ",q.front());
            else
                printf("%d",q.front());
            q.pop();
            int u = q.front();
            q.pop();
            q.push(u);
        }
        printf("\nRemaining card: %d\n",q.front());
    }
    return 0;
}
