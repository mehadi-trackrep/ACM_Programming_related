#include <stdio.h>
struct info{

    char name[20];
    int reg,ses;
    double grade;

};

struct info x[2];  /// x means koy joner data input nite hobe ///

int main()
{
    int i;
    for(i = 0;i < 2;i++){
        scanf("%[^\n]%d%d%lf",&x[i].name,&x[i].reg,&x[i].ses,&x[i].grade);

        printf("%s %d %d %.2lf",x[i].name,x[i].reg,x[i].ses,x[i].grade);

        getchar();

        printf("\n");
    }

    return 0;
}
