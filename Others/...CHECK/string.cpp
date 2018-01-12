#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char str1[100];
    cin >> str;
    int len = str.length();
    int k = 0;
    for(int i=0; i<len; i++){
        if(str[i] == str[i+1]){
            str1[k++] = str[i];
            while(str[i] == str[i+1]){
                i++;
            }
        }
        else
            str1[k++] = str[i];
    }
    str1[k] = '\0';
    cout << str1 << endl;
    return 0;
}
