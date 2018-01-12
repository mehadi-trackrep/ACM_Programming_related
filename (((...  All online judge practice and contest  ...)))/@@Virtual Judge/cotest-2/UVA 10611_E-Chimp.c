#include <stdio.h>
int main()
{
    int a[50000],q[50000],i,j,n,que;    ///AC
    int low,high,mid;

    scanf("%d",&n);

    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&que);

    for(i = 0;i < que;i++)
        scanf("%d",&q[i]);

    i = 0;

    while(i < que){

        low = 0;
        high = n-1;

        while(low <= high){
            mid = (low+high)/2;
            if(q[i] > a[mid])
                low = mid+1;
            else if(q[i] < a[mid])
                high = mid-1;
            else if(q[i] == a[mid]){
                break;
            }
        }
        //printf(".................%d\n",a[mid]);
        if ( a [mid] == q[i] ) {
            if ( mid - 1 >= 0 ) printf ("%d", a [mid - 1]);
            else printf ("X");

            if ( mid + 1 < n ) printf (" %d", a [mid + 1]);
            else printf (" X");

            printf ("\n");
        }
        else {
            if ( a [mid] < q[i] ) printf ("%d", a [mid]);
            else if ( mid - 1 >= 0 ) printf ("%d", a [mid - 1]);
            else printf ("X");

            if ( a [mid] > q[i] ) printf (" %d", a [mid]);
            else if ( mid + 1 < n ) printf (" %d", a [mid + 1]);
            else printf (" X");

            printf ("\n");
        }

        i++;
    }

    return 0;
}
