#include<stdio.h>

int main(void)
{
  long a = 1L;
  long b = 2L;
  long c = 3L;


  printf("A variable of type long occupies %d bytes.", sizeof(long));
  printf("\nHere are the addresses of some variables of type long:");
  printf("\nThe address of a is: %p  The address of b is: %p", &a, &b);
  printf("\nThe address of c is: %p", &c);
  return 0;
}
