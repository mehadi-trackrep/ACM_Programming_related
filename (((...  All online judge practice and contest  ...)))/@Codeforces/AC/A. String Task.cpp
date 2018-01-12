#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.length();     ///AC
    for(int i=0; i<len; i++){
        if(str[i] == 'A' || str[i] == 'a' ||  str[i] == 'E' ||  str[i] == 'e' ||  str[i] == 'I' || str[i] == 'i' ||
           str[i] == 'O' || str[i] == 'o' ||  str[i] == 'U' ||  str[i] == 'u' || str[i] == 'Y' || str[i] == 'y')
           continue;
        if(str[i] >= 'A' && str[i] <= 'Z')
            printf(".%c",str[i]+32);
        else
            printf(".%c",str[i]);
    }
    printf("\n");
    return 0;
}
