#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    char str[] = "hello";
    cin >> word;
    int len = word.length();
    int k = 0,ck=0;
    if(len < 5)
        printf("NO\n");
    else
    {
        for(int i=0; i<len; i++){   /// AC
            if(word[i] == str[k]){
                k++;
            }
            if(k >= 5){
                ck = 1;
                break;
            }
        }

        if(ck == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
