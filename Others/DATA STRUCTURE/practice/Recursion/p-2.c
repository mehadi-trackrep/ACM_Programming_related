#include <stdio.h>

int mystery(int a, int b) {
    
   if (b == 0)     return 0;  
     
   if (b % 2 == 0)  return mystery(a+a, b/2);  
     
   return mystery(a+a, b/2) + a;
  
}

int main()
{
    
    int a = mystery(2,25),b = mystery(3, 11);
    
    printf("%d %d\n",a,b);
    
    return 0;
   
}