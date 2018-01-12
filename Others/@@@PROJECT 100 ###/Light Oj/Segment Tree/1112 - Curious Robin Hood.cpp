#include <bits/stdc++.h>
using namespace std;

#define sz 100005
#define Max 100010

int arr[sz];
int tree[sz * 3];

void init(int node, int b, int e)       ///AC
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }

    int Left = node * 2;
    int Right = node * 2 + 1;

    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);

    tree[node] = tree[Left] + tree[Right];
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;

    if (b >= i && e <= j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;

    int mid = (b + e) / 2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);

    return p1+p2;
}

void update(int node, int b, int e, int i, int newvalue)    /// i th index a update korbo ...
{
    if (i > e || i < b)
        return;

    if (b >= i && e <= i) {
        tree[node] += newvalue;
        return;
    }

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);

    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    int tcas;

    scanf("%d",&tcas);

    for(int i=1; i<=tcas; i++)
    {

        int n,q;

        scanf("%d%d",&n,&q);

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }

        init(1, 1, n);

        int pivot,new_val,I,J;

        printf("Case %d:\n",i);

        while(q--)
        {
            scanf("%d",&pivot);

            if(pivot == 1)
            {
                scanf("%d",&I);
                //printf("%d\n",query(1,1,n,I+1,I+1));
                printf("%d\n",arr[I+1]);
                int a = (arr[I+1])*(-1);
                arr[I+1] = 0;
                update(1,1,n,I+1,a);
            }
            else if(pivot == 2)
            {
                scanf("%d%d",&I,&new_val);
                update(1,1,n,I+1,new_val);
                arr[I+1] += new_val;        /// v.v.i.
            }
            else{
                scanf("%d%d",&I,&J);
                printf("%d\n",query(1,1,n,I+1,J+1));
            }
        }

    }

    //update(1, 1, n, 2, 0);
    //cout << query(1, 1, n, 1, 3) << endl;
    //update(1, 1, n, 2, 2);
    //cout << query(1, 1, n, 2, 2) << endl;

    return 0;
}

/*

2

5 3
78 1 22 12 3
1 2
3 5
4 4

1 1
10
1 1

*/

