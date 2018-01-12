#include <stdio.h>

void ex(int n) { 
        
    if (n <= 0) 
        return;     
    
    printf("%d\n",n);     
    
    ex(n-2);     
    ex(n-3); 
    
    printf("=>%d\n",n); 
   
} 

int main()
{
    ex(6);
    return 0;   
}









