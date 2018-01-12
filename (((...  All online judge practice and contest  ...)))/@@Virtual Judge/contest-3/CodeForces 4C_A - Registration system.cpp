#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    map <string,int>  mp;   /// AC

    char name[35];
    for(int i=1; i<=t; i++){
        //getline(cin,name);
        scanf("%s",name);
        mp[name]++;
        if(mp[name]>1){
            printf("%s%d\n",name,mp[name]-1);
        }
        else
            printf("OK\n");
    }
    return 0;
}
