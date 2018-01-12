#include <bits/stdc++.h>
using namespace std;

int ara[50005];
int n;
int ind;

int binary_search(int x)
{
    int low = 0,high = n-1,mid;

    mid = (low+high)/2;

    while(low <= high)
    {
        if(ara[mid] < x) low = mid+1;
        else if(ara[mid] > x) high = mid-1;
        else if(ara[mid] == x) {ind = mid; return 1;}   ///AC

        mid = (low+high)/2;
    }

    ind = low;
    return 0;
}

int main()
{
    int q;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    cin >> q;
    int x;

    for(int i=1; i<=q; i++)
    {
        scanf("%d",&x);
        if(ara[n-1] < x)
            printf("%d X\n",ara[n-1]);
        else if(ara[0] > x)
            printf("X %d\n",ara[0]);
        else
        {
            int ck = binary_search(x);
            if(ck == 1)
            {
                int j = ind;
                while(ara[--j] == x && j >= 0) ;
                if(j >= 0) printf("%d ",ara[j]);
                else printf("X ");

                j = ind;
                while(ara[++j] == x && j <= n-1) ;
                if(j <= n-1) printf("%d\n",ara[j]);
                else printf("X\n");
            }
            else
            {
                if(ind-1 >= 0) printf("%d ",ara[ind-1]);
                else printf("X ");

                printf("%d\n",ara[ind]);

            }
        }

    }

    return 0;
}

/*

4
1 4 5 7
4
4 6 8 10

*/
