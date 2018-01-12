#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int N;
    cin >> N;
    getchar();

    while(N--)  ///AC
    {
        cin >> str;
        int total = 0;
        for(int i=0; i<32; i++)
        {
            if(i%8 == 0)
                total += (str[i]-'0')*128;
            else if(i%8 == 1)
                total += (str[i]-'0')*64;
            else if(i%8 == 2)
                total += (str[i]-'0')*32;
            else if(i%8 == 3)
                total += (str[i]-'0')*16;
            else if(i%8 == 4)
                total += (str[i]-'0')*8;
            else if(i%8 == 5)
                total += (str[i]-'0')*4;
            else if(i%8 == 6)
                total += (str[i]-'0')*2;
            else if(i%8 == 7){
                total += (str[i]-'0');
                if(i < 31) printf("%d.",total);
                else if(i == 31) printf("%d\n",total);
                total = 0;
            }
        }
    }
    return 0;
}
