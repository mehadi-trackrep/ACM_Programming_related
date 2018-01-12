#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{

    int t;
    cin >> t;
    getchar();
    while(t--){
        string str;
        cin >> str;
        int len = str.length();
        int i,j,ck = 1;
        for(i = 1,j = len-1;i < len && j > 0;i++,j--){
            int v1 = (int)str[i] - (int)str[i-1];
            if(v1 < 0)
                v1 *= (-1);
            int v2 = (int)str[j] - (int)str[j-1];
            if(v2 < 0)
                v2 *= (-1);
            if(v1 == v2)
                continue;
            else{
                printf("Not Funny\n");
                ck = 0;
                break;
            }
        }
        if(ck == 1)
            printf("Funny\n");
    }

    return 0;
}
