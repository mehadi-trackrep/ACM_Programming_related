#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x = 0;
    string str;    ///AC
    cin >> n;
    while(n--)
    {
        cin >> str;
        if(str == "++X") x++;
        if(str == "X++") x++;
        if(str == "--X") x--;
        if(str == "X--") x--;
    }
    printf("%d\n",x);
    return 0;
}
