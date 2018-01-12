#include <stdio.h>
#include <stdbool.h>
#define Max 600000 /// 6 lakh means, maximum 6 lakhs porjonto prime generate korte pare
bool com[Max]; /// com means composite number arr
int prime[50000],p_cnt = 0; ///  p_cnt means prime number count
void markmultiples(int i){

    int j;

    for(j = i+i;j <= Max;j += i)    /// total koyta prime hoibo:- Formula: Max/(ln(Max)-1) 
        com[j] = true;

}
void seive(){

    com[0] = true;
    com[1] = true;
    markmultiples(2);
    prime[p_cnt++] = 2;

    int i;

    for(i = 3;i <= Max;i += 2){
        if(!com[i]){
            markmultiples(i);
            prime[p_cnt++] = i;
        }
    }

}
int main()
{
    int i;

    seive();

    for(i = 0;i < p_cnt;i++)
        printf("%d ",prime[i]);

    return 0;
}
