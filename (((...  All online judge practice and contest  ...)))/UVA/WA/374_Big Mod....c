/// 2147483647 2147483647  46340
#include <stdio.h>
#include <string.h>

char Bi[100000];
int ara[100000],mod_ara[100000];
void Binary(int n);
int check_one(void);

int main(){

    int i,n,p,M,len,res,k1,k2;  /// - mod er khettere problem

    while(scanf("%d%d%d",&n,&p,&M) == 3){
            if(n==0)printf("0\n");
        else if(p==0)printf("1\n");
        else{

        Binary(p);
        check_one();

        len = strlen(Bi);
        k1 = 0;
        k2 = 0;

        res = n % M;
        if(ara[k1] == 0){
            mod_ara[k2++] = res;
            k1++;
        }
        for(i = 1;i < len;i++){
            //printf("%d ",ara[i]);
            res = res*res % M;

            if(ara[k1] == i){
               mod_ara[k2++] = res;
               k1++;
            }
        }
        if(k2 > 1){
            res = 1;
            for(i = 0;i < k2;i++){
                res = res * mod_ara[i] % M;
            }
            printf("%d",res);
        }
        else
            printf("%d",mod_ara[0]);

        printf("\n");
        }
    }
    //puts(Bi);

    return 0;
}

void Binary(int n){

    int k = 0;

    while(n > 0){

        Bi[k++] = n - 2*(n/2) + 48;  /// e.g. ekhettere Bi string k reverse korar dorkar hocce na ...
        n /= 2;
    }

    Bi[k] = '\0';

}

int check_one(void){

    int i,k = 0,len;
    len = strlen(Bi);
    for(i = 0;i < len;i++){
        if(Bi[i] == '1')
            ara[k++] = i;
    }

    return k;
}

/// 2147483647
