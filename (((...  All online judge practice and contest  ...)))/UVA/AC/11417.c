#include <stdio.h>
int GCD(int a,int b){

    int i;

    for(i = a;i >= 1;i--){
        if(b % i == 0 && a % i == 0)
            return i;
    }

}
int main()
{
    int N,i,j,G;

    while(scanf("%d",&N)){ /// check corner case

        if(N == 0)
            break;
        G = 0;

        for(i = 1;i < N;i++){
            for(j = i+1;j <= N;j++)
                G += GCD(i,j);
        }

        printf("%d\n",G);
    }

    return 0;
}

