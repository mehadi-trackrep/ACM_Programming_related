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

    int count = 0;
    while(!q.empty()){
        j = q.front();
        q.pop();
        count++;
        if(count == 2){
            q.push(j);
            count = 0;
        }
    }

    cout << j;

    return 0;
}
