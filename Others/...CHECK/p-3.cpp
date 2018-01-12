#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len = str.length();
    for(int i = 0;i < len;i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            continue;
        else{
            for(int j = i;j < len-1;j++){
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }

    str[len] = '\0';

    cout << str << endl;

    return 0;
}

/*
I am "h4xor" , now replace all garbage % ^&#& values.
*/
