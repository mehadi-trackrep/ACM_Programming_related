#include<stdio.h>

void main()
{
	int i;
	char names[5][20]={"apple","orange","banana","mango","grape"};
	// The row repesents no. of strings and col represents length of the string

	for(i=0;i<5;i++)
	{
		printf("%s\n",names[i]);
	}
}
