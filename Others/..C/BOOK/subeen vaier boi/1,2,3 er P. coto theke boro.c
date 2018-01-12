#include <stdio.h>
int main()
{
    int n,i,j,k,count = 0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);    /// permutation
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]!= a[j]){
                for(k=0;k<n;k++){
                    if(a[k]!= a[i] && a[k]!= a[j]){
                        printf("%d,%d,%d\n",a[i],a[j],a[k]);
                        ++count;
                    }
                }
            }
        }
    }

    printf("\n%d",count);

    return 0;
}
