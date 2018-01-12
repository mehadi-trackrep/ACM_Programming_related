#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,x;
    int min,max;
    int ara[9]={1,2,3,4,5,6,7,8,9}; /// n is the number of elements
    n = 9;
    scanf("%d",&x);  /// searching element

    for(j = ara[0] ; j < ara[9] ; j++){

        if(x >= ara[n/2] && x <= ara[n/2]){
            printf("%d th index",n/2);
            break;
        }

        else if(x > ara[n/2]){

            min = n/2;
            max = n-1;
        }

        else
        {
            min = 0;
            max = n/2;
            n  = n/2;
        }
    }



    return 0;
}

