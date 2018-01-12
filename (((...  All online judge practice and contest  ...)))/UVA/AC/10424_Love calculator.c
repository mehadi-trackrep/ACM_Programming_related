#include <stdio.h>
#include <string.h>
int convert_one_digit(int n){

    int sum = 0;

    while(n >= 10){

        sum = 0;

        while(n >= 1){

            sum = sum + (n % 10);

            n /= 10;
        }

        n = sum;
    }

    return sum;
}

//int summation()
int main()
{
    char name1[30],name2[30];
    int i,len1,len2,sum,a,b;
    double love,l;

    while(gets(name1) && gets(name2)){

        len1 = strlen(name1);
        len2 = strlen(name2);
        sum = 0;

        for(i = 0;i < len1;i++){

            if(name1[i] >= 65 && name1[i] <= 90)
                sum = sum + ((int)name1[i] - 64);

            else if(name1[i] >= 97 && name1[i] <= 122)
                sum = sum + ((int)name1[i] - 96);

            else ;
        }

        a = convert_one_digit(sum);
        sum = 0;

        for(i = 0;i < len2;i++){

            if(name2[i] >= 65 && name2[i] <= 90)
                sum = sum + ((int)name2[i] - 64);

            else if(name2[i] >= 97 && name2[i] <= 122)
                sum = sum + ((int)name2[i] - 96);

            else ;
        }

        b = convert_one_digit(sum);

        if(a == b)
            love = 100.0;
        else if(a < b ){
            l = (double)a / (double)b;
            love = l * 100;
        }
        else {
             l = (double)b / (double)a;
             love = l * 100;
        }

        printf("%.2lf%%\n",love);
    }

    return 0;
}
