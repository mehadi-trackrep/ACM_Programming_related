#include <stdio.h>
int main(){
     int n,array[40];

    int i,j;

    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
        scanf("%d",&array[i]);

     for(int x=0; x<n; x++)

	{

		int index_of_min = x;

		for(int y=x; y<n; y++)

		{

        if(array[index_of_min]>array[y])

        {

				index_of_min = y;

			}

		}

		int temp = array[x];

		array[x] = array[index_of_min];

		array[index_of_min] = temp;

	}

	for(i = 0 ; i < n ; i++)
        printf("%d",&array[i]);
    return 0;

}
