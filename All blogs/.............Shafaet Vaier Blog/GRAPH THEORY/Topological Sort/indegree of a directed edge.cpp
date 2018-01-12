#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,E;

    cin >> N >> E;

    vector <int> edge[E];
    set <int> s;

    int indegree[N+5];
    memset(indegree,0,sizeof(indegree));

    for(int i = 0;i < E;i++){
        int x,y;
        cin >> x >> y;

        edge[i].push_back(x);
        edge[i].push_back(y);

        s.insert(x);

        s.insert(y);

        ++indegree[y];

        ///printf("===> %d \n",indegree[y]);
    }

    ///output:
    for(int i = 0;i < E;i++){
        vector <int> :: iterator it;
        cout << '\n';
        for(it = edge[i].begin();it < edge[i].end();it++){
            if(it != edge[i].begin())
                cout << "-> ";
            printf("%d ",*it);
        }
        cout << "\n\n";

    }

    set <int> :: iterator it;

    for(it = s.begin();it != s.end();it++){
        printf("%d er indegree : %d\n",*it,indegree[*it]);
    }

    return 0;
}

/*
4 4
2 1
2 3
1 4
3 4
*/
