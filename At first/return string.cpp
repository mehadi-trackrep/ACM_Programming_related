#include <stdio.h>
char  check(int a){
 //   char *ch = "Yes",*ck  = "No";
     char ch = 'Y',ck = 'N';
    if(a == 49)
    return ch;
    else
    return ck;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%c",check(a));
	
	return 0;
}