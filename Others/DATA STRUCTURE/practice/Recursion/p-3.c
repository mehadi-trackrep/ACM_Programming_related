#include <stdio.h>

void quiz(int i)     
{        
    if(i <= 1) return ;
//    if (i > 1)        
//    {           
//        quiz(i / 2);           
//        quiz(i / 3);        
//    }
     quiz(i-1);
    printf("quiz(%d)-> ",i);
    printf("*\n"); 
   
}

int main()
{
    
    quiz(6);
    
    return 0;
   
}

