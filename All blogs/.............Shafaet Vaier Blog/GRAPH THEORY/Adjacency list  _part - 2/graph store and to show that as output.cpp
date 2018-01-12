#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int node,edge,i,x,y;
    vector <int> v[10000],v1;
    cin >> node >> edge;
    for(i = 0;i < edge;i++){
        cin >> x >> y;
        v[x].push_back(y);
        v1.push_back(x);
    }

    vector <int> :: iterator it,it1;

    for(it = v1.begin();it < v1.end();it++){
        for(it1 = v[*it].begin();it1 < v[*it].end();it1++){
            cout << *it << ' ' << *it1 ;
            cout << endl;
        }
    }

    return 0;
}
