#include <bits/stdc++.h>
using namespace std;

#define Max 1000000 
bool com[Max];
int prime[78605],p_cnt = 0,vis[Max];    ///AC
void markmultiples(int i){

    int j;

    for(j = i+i;j <= Max;j += i)    /// total koyta prime hoibo:- Formula: Max/(ln(Max)-1) 
        com[j] = true;

}
int seive(){

    com[0] = true;
    com[1] = true;
    markmultiples(2);
    prime[p_cnt++] = 2;
    
    vis[2] = 1;

    int i;

    for(i = 3;i <= Max;i += 2){
        if(!com[i]){
            markmultiples(i);
            prime[p_cnt++] = i;
            
            vis[i] = 1;
        }
    }
    
    return p_cnt;

}

int main()
{
    memset(vis,0,sizeof vis);
    
    seive();
    
    //cerr << "###" << p_cnt << endl;
    
    prime[0] = 2;
    
    int n;
    
    while(cin >> n)
    {
        if(n == 0) break;
        int ck = 0;
        ///cerr << "###" << p_cnt << endl;
        printf("%d:\n",n);
        
        
        for(int i=0; i<p_cnt; i++)
        {
            if(prime[i] > n)
                break;
            int ck_prime = n-prime[i];
            ///cerr << "###" << ck_prime << endl;
            if(vis[ck_prime] == 1)
            {
                ck = 1;
                printf("%d+%d\n",prime[i],ck_prime);
                break;
            }
        }
        if(ck == 0)
            printf("NO WAY!\n");
    }

    return 0;
}

/*

4
5
6
7
9
10
11
0


*/
