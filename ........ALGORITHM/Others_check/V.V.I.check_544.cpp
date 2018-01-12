#include <bits/stdc++.h>
using namespace std;
struct edge
{
    int u,v,w;
    string city1,city2; ///V.V.I.
};
vector <edge> e;
int main()
{
    string city1,city2,start_city,end_city;
    int total_city,total_road,w;    ///total_city->Vertex,total_road->Edge...

    scanf("%d%d",&total_city,&total_road);

    ///cin >> total_city >> total_road;

    map <string,int> mp;
    int x=1;

    for(int i=1; i<=total_road ;i++)
    {
        cin >> city1 >> city2 >> w;
        if(mp[city1] == 0)
            mp[city1] = x++;
        if(mp[city2] == 0)
            mp[city2] = x++;
        edge get;
        get.u = mp[city1];
        get.v = mp[city2];
        get.w = w;
        get.city1 = city1;
        get.city2 = city2;
        e.push_back(get);
    }
    cin >> start_city >> end_city;

//    vector <edge> :: iterator it;
//
//    for(it = e.begin(); it <= e.end(); it++)
//    {
//        //printf("%d->%d,%d->%d, %d\n",it->city1,it->u,it->city2,it->v,it->w);
//        printf("%s %s\n",(*it).city1,(*it).city2);
//    }

    for(int i=0; i<e.size(); i++)
        printf("%d %d %d\n",e[i].u,e[i].v,e[i].w);

    cout << start_city << ' ' << end_city << endl;

    //printf("%s->%d, %s->%d\n",start_city,mp[start_city],end_city,mp[end_city]); /// vul koi???

    return  0;
}

/*

4 3
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Muenchen

*/
