#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int main()
{
    int i,data;
    queue < int > q;
    for(i = 1;i < 5;i++)
        q.push(i);
    while(!q.empty())
    {
        cout << q.front() << endl; /// top() for printing
        q.pop();  /// pop() for removing
    }
    return 0;
}

