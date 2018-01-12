#include <stdio.h>
int main()
{
    int n,i,max_number = 0;
    scanf("%d",&n);
    getchar();
    char a[n];
    gets(a);

  ///  puts(a); printf("\n%d\n",a[0]-48);
    if( (a[1]-48) > a[0]-48 )
           max_number  = a[1]-48;
       else max_number = a[0]-48;
    for(i=2;i<n;i++){
        if( (a[i]-48) > max_number )
           max_number  = a[i]-48;
       else ;
    }
    printf("%d",max_number);
    return 0;

}
