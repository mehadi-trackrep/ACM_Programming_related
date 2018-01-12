#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int tcas,a,b,c=1;
    cin >> tcas;
    while(tcas--)
    {
        cin >> a >> b;
        int hcf = gcd(a,b);
        int lcm = (a*b)/hcf;
        printf("%d %d %d\n",c++,lcm,hcf);
    }
    
    return 0;
    
}