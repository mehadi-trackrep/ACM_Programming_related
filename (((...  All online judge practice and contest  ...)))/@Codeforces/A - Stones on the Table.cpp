#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    string str;
    getline(cin,str);

    int len = str.length();

    int cnt = 0;
    if(len > 1){
        for(int i=0; i<len-1; i++)  ///AC
        {
            if(str[i] == str[i+1])
                cnt++;
        }
        printf("%d\n",cnt);
    }
    else if(len == 1)
        printf("0\n");

    return 0;
}

/*

3
RRG

5
RRRRR

4
BRBG

*/
