#include<cstdio>
#include<algorithm>
using namespace std;

struct node
{
    double per_t;
    int order;
    bool operator < (const node & a)const
    {
        return per_t > a.per_t;
    }
}job[1010];

int main()      /// logic: je kaj e, per time a beshi cents deoa lage , se kaj joto taratari somvob kora valo ... taile delay hoar chance kom thake ,
                                ///  ejonno fine o kom hoite pare...
{
    int t, n;
    double x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) ///AC
        {
            scanf("%lf%lf", &x, &y);
            job[i].per_t = y / x;           /// per time a koto cent deoa lagbe???
            job[i].order = i + 1;
        }

        sort(job, job + n);

//        for (int i = 0; i < n; i++)
//        {
//            printf("=> %lf %d\n",job[i].k,job[i].order);
//        }

        printf("%d", job[0].order);

        for (int i = 1; i < n; i++)
            printf(" %d", job[i].order);

        putchar('\n');

        if (t) putchar('\n');
    }

    return 0;
}
