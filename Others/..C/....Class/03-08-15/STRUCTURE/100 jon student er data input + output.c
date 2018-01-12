#include <stdio.h>

struct stud {

    char name[32],dept[3];
    int reg,session;
    double CGPA;

}x[100];  /// x[100] ortho stud type ti 100 bar kaj korbe
            /// must semicolon dite hobe ///

int main(){

  ///  struct stud x[n];
    int i,n;

    scanf("%d",&n);
    getchar();

    for(i=0;i<n;i++){
        scanf("%[^\n]%s%d%d%lf",&x[i].name,&x[i].dept,&x[i].reg,&x[i].session,&x[i].CGPA);
        getchar();
    }

    for(i=0;i<n;i++){
        printf("%s\t%s\t%d\t%d\t%.2lf\n",x[i].name,x[i].dept,x[i].reg,x[i].session,x[i].CGPA);
    }

}
