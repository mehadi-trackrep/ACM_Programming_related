#include <stdio.h>
int main()
{
    int i,fact=1;

	for(i=1;i<=96;i++)
	{
		fact=((fact%97)*(i%97))%97; /// i >= 97 holei fact = 0

	}

	printf("%d\n",fact);

    return 0;
}
