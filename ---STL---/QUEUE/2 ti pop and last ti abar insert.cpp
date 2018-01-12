#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int main()
{
    int n,i,x,j;

    queue <int> q;

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        scanf("%d",&x);
        q.push(x);
    }

    //cout << q.size();
    j = -1;

    while(q.size() >= 2){
        q.pop();
        j = q.front();
        q.pop();
        q.push(j);
    }

    cout << "Last element of the queue => "<< j << endl;

    return 0;
}
