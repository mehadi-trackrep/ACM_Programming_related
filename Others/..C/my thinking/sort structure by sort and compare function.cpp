/*
5
1 11 3.5
2 10 3.62
3 1.5 3.75
4 10 4
5 11 3.4
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define MAX 100000

struct data{

    int reg;
    double credit,cgpa;

};

data x[MAX];

bool compare(data A,data B){

    if(A.cgpa == B.cgpa)
        return (A.credit > B.credit);
    else
        return (A.cgpa > B.cgpa);

}

bool comp1(data A,data B){

    if(A.cgpa == B.cgpa)
        return (A.credit < B.credit);
    else
        return (A.cgpa < B.cgpa);

}

int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i = 0;i < n;i++)
        scanf("%d%lf%lf",&x[i].reg,&x[i].credit,&x[i].cgpa);

    for(i = 0;i < n;i++){
        //sort(x,x+n,compare);  /// decreasing order a
        sort(x,x+n,comp1);      /// increasing order a

    }

    printf("\nReg\tCredit\tCGPA\n");

    for(i = 0;i < n;i++)
        printf("%d\t%.2lf\t%.2lf\n",x[i].reg,x[i].credit,x[i].cgpa);

    return 0;
}

/*

5
1 11 3.5
2 10 3.62
3 1.5 3.75
4 10 4
5 11 3.4

*/
