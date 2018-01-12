        ///input:
/*
5
Mickey 1 10 1991
Alice 30 12 1990
Tom 15 8 1993
Garfield 20 9 1990
Jerry 18 9 1990

or,
5
Mickey 1 10 1990
Alice 30 12 1990
Tom 15 8 1990
Jerry 18 9 1990
Garfield 20 9 1990
*/
#include <stdio.h>
#include <string.h>
int main()
{
    struct info
    {
        char name[32];
        int day,month,year;
    };
    struct info num_pepl[100];

    int i,n,max_year,max_month,max_day,min_year,min_month,min_day;
    int max_index,min_index;

    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%s%d%d%d",num_pepl[i].name,&num_pepl[i].day,&num_pepl[i].month,&num_pepl[i].year);

    //for(i = 0; i < n; i++)
        //printf("%s %d %d %d\n",num_pepl[i].name,num_pepl[i].day,num_pepl[i].month,num_pepl[i].year);
    max_year = 0;
    max_month = 0;
    max_day = 0;
    min_year = 0;
    min_month = 0;
    min_day = 0;

    for(i = 0;i < n-1;i++){
        if(num_pepl[i].year > num_pepl[i+1].year){
            max_year = num_pepl[i].year;
            min_year = num_pepl[i+1].year;
            max_index = i;
            min_index = i+1;
        }
        else if(num_pepl[i].year < num_pepl[i+1].year){ /// problem
            max_year = num_pepl[i+1].year;
            min_year = num_pepl[i].year;
            max_index = i+1;
            min_index = i;
        }
    }

    printf("%d %d , %d %d",max_year,min_year,max_index,min_index);

    return 0;
}
