#include <stdio.h>
struct stud{

    char name[32],dept[3];
    int reg,ses;
    double grade;

}x[5];

int main()
{
    int i,j;
    char temp[32];

    for(i = 0;i < 2;i++){
        scanf("%[^\n]%s%d%d%lf",&x[i].name,&x[i].dept,&x[i].reg,&x[i].ses,&x[i].grade);
        getchar();
    }

    for(i = 0;i < 5;i++){

        for(j = i+1;j < 5;j++){
            if(strcmp(x[i].name,x[j].name) > 0){
                strcpy(temp,x[i].name);
                strcpy(x[i].name,x[j].name);
                strcpy(x[j].name,temp);
            }
        }

       /// printf("%s\n",x[i].name);   swap bojhar jonno
    }

    for(i = 0;i < 2;i++){
        printf("%s %s %d %d %.2lf\n",x[i].name,x[i].dept,x[i].reg,x[i].ses,x[i].grade);

    }

    return 0;
}
