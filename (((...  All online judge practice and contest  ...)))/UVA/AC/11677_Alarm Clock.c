#include <stdio.h>
int main()
{
    int H1,M1,H2,M2,h;
    int total_minutes;

    while(scanf("%d%d%d%d",&H1,&M1,&H2,&M2)){
        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
            break;
       if(H1 < H2){
            if(M1 == M2)
                printf("%d\n",(H2-H1)*60);
            else if(M1 > M2)
                printf("%d\n",(H2-H1)*60 - (M1-M2));
            else
                printf("%d\n",(H2-H1)*60 + (M2-M1));
            continue;
       }
       if(H1 == H2){
            if(M1 > M2){
                total_minutes = (60-M1);
                H1++;
                h = 23-H1;
                total_minutes += h*60 + (H2+1)*60 + M2;
                printf("%d\n",total_minutes);
            }
            else
                printf("%d\n",M2-M1);
            continue;
       }
       if(H1 > H2){
            if(M1 == M2){
                h = 23-H1;
                total_minutes = h*60 + (H2+1)*60;
                printf("%d\n",total_minutes);
            }
            else{
                total_minutes = (60-M1); /// ekhettere M1 >/< M2 same kaj kore...
                if(H1 == 23){
                    h = 0;
                    total_minutes += h*60 + (H2)*60 + M2;
                }
                else{
                    h = 23 - ++H1;
                    total_minutes += h*60 + (H2+1)*60 + M2;
                }
                printf("%d\n",total_minutes);
            }
       }
    }

    return 0;
}
