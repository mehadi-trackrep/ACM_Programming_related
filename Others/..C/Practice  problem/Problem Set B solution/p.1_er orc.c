#include <stdio.h>
int main()
{
    int n,i,max_number;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(a[0]<a[1])
        max_number = a[1];
    else max_number = a[0];
    for(i=2;i<n;i++){

      ///  printf("%d",a[i]);
        if(max_number<a[i])
            max_number = a[i];
        else ;
    }

    printf("%d",max_number);

    return 0;
}
