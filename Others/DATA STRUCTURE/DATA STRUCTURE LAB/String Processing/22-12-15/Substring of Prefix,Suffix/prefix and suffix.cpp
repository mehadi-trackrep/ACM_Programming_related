#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int x = 1,i,j;
    for(i = 0;i < len;i++){
        for(j = 0;j < x;j++)
            printf("%c",str[j]);
        printf("\t");
        for(j = i;j < len;j++)
            printf("%c",str[j]);
        x++;
        printf("\n");
    }
    return 0;
}
