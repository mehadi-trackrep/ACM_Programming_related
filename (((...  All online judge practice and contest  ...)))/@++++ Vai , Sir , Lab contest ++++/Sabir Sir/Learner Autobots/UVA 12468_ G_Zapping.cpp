#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ck1,ck2;
    while(cin >> a >> b)
    {
        if(a == -1 && b == -1)  ///AC
            break;
        if(b > a)
        {

            ck1 = abs(100-b+(a-0));
            ck2 = abs(b-a);
        }
        else
        {
            ck1 = abs(100-a+(b-0));
            ck2 = abs(a-b);
        }
        //cerr << "###" << ck1 << ' ' << ck2 << endl;
        if(ck1 < ck2)
            printf("%d\n",ck1);
        else
            printf("%d\n",ck2);
    }
    return 0;
}
