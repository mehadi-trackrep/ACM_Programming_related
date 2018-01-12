#include<bits/stdc++.h>
using namespace std;
bool compare (int a,string str)
{
    return 
}
int main()
{
    int total_pair;
    cin >> total_pair;
    vector < pair<int,string> > vec;
    
    pair <int,string> p;
    
    while(total_pair--)
    {   
        cin >> p.first;
        cin >> p.second;
        
        vec.push_back(p);
    }
    
    for(int i=0;i<vec.size();i++)
    {
//        int a = vec[i].first;
//        string str = vec[i].second;   /// evabe na lekhay valo
//        
//        printf("%d ",a);
//        cout << str << endl;
           cout << vec[i].first << "  " << vec[i].second << endl;
    }
    
    return 0;
}

/*

5
1 me
2 he
3 fuck
4 nun
5 sec

*/