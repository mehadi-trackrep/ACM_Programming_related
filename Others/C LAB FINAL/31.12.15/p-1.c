/*
5
1 11 3.5
2 10 3.62
3 1.5 3.75
4 10 4
5 11 3.4
*/
#include <stdio.h>
#define MAX 100000
struct data{

    int reg;
    double credit,cgpa;

}x[MAX];
int main()
{
    int n,i,j,temp;
    double temp1;

    scanf("%d",&n);

    for(i = 0;i < n;i++)
        scanf("%d%lf%lf",&x[i].reg,&x[i].credit,&x[i].cgpa);

    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            if(x[i].cgpa < x[j].cgpa){

                temp1 = x[i].cgpa;
                x[i].cgpa = x[j].cgpa;
                x[j].cgpa = temp1;

                temp1 = x[i].credit;
                x[i].credit = x[j].credit;
                x[j].credit = temp1;

                temp = x[i].reg;
                x[i].reg = x[j].reg;
                x[j].reg = temp;
             }
             if(x[i].cgpa == x[j].cgpa){
                if(x[i].credit < x[j].credit){

                    temp1 = x[i].credit;
                    x[i].credit = x[j].credit;
                    x[j].credit = temp1;

                    temp = x[i].reg;
                    x[i].reg = x[j].reg;
                    x[j].reg = temp;
                }
             }
        }
    }

    printf("\nReg\tCredit\tCGPA\n");

    for(i = 0;i < n;i++)
        printf("%d\t%.2lf\t%.2lf\n",x[i].reg,x[i].credit,x[i].cgpa);

    return 0;
}
