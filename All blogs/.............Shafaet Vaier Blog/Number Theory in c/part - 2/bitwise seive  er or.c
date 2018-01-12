#include <stdio.h>
#include <string.h>
#include <math.h>

#define mx 10000000

int status[(mx/32)+2];
int N;

void sieve()
{
	 int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }

	 puts("2");
	 for(i=3;i<=N;i+=2)
		 if( Check(status[i>>5],i&31)==0)
	 	 printf("%d\n",i);
}

int main(){

    int n;
    scanf("%d",&n);
    /// ???
    return 0;
}

