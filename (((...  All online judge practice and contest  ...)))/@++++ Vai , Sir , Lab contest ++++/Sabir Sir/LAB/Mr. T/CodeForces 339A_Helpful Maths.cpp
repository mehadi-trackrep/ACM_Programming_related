#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    vector <int> v;
    int n;

    cin>>str;



    stringstream ss(str);   ///AC

    while(ss>>n)
    {
       // cout<<n<<endl;
        v.push_back(n);
    }

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i];
        if(i != v.size()-1) cout << "+";
    }

    return 0;
}
