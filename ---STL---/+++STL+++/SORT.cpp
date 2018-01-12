#include <bits/stdc++.h>
using namespace std;

struct data
{
    int a;
    bool operator < (const data &p)const{
        return a < p.a;
    }
};

int main()
{
     int i;
     
     priority_queue <data> p;
     
     for(i=1; i<=6; i++)
     {
         data x;
         x.a = i;
         p.push(x);
     }
     
     while(!p.empty())
     {
         data x=p.top();
         printf("%d\n",x.a);
         p.pop();
     }
}