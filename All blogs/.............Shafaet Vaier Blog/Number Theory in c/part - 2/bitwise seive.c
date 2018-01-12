#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool Check(int N,int pos){return (bool)(N & (1<<pos));} /// header file problem
int Set(int N,int pos){	return N=N | (1<<pos);}

int N =100,prime[100];
int status[100/32];
void sieve()
{
     int i, j, sqrtN;
     sqrtN = (int)sqrt( N );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( check(status[i/32],i%32)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j/32]=Set(status[j/32],j % 32)   ;
	 		 }
		 }
	 }
	 puts("2");
	 for(i=3;i<=N;i+=2)
		 if( check(status[i/32],i%32)==0)
	 	 printf("%d\n",i);

}
