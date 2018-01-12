#include <iostream>
#include <cstdio>
#include <queue>
using  namespace std;
int main()
{
    int i,n,x;
    priority_queue <int> pq; /// priority queue stack er moto kore choto
                        /// theke boro gulo rakhe...so, top a thake max ta.
    scanf("%d",&n);

    for(i = 0;i < n;i++){
        //scanf("%d",&x);
        pq.push(i);
    }
    cout << "\n\n";
    while( !pq.empty() ) {
       //cout << pq.front() << endl; // printing the top
        cout << pq.top() << endl; // printing the top
        pq.pop(); // removing that one
    }

    return 0;
}
