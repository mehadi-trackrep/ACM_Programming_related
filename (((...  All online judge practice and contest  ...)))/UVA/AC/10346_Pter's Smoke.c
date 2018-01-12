#include <stdio.h>
int main()
{
    int n,k,total_cigar,butt,i;

    while(scanf("%d%d",&n,&k) == 2)
    {
        total_cigar = 0;
        butt = 0;
        while (n > 0) {
          total_cigar += n; /* accumulate all new cigars so far */
          butt += n; /* after Peter smokes these n cigar, we have n butts */
          n = butt / k; /* so these n butts become new cigars */
          butt %= k; /* butts left are reserved for future cigars */
          //printf("%d %d\n\n",n,butt);
        }
        printf("%d\n",total_cigar);
    }
}
