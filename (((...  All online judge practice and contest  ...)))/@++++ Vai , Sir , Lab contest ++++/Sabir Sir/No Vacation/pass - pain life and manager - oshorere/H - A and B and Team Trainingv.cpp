#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,vag,ex,nw;

    cin>>ex>>nw;
    //int sum=ex+nw;
    vag=(ex+nw)/3;

    cerr<<"vag "<<vag<<endl;

    if(vag<ex && vag<=nw) cout<<"vag ans"<<vag<<endl;
    else if(vag>=ex)
    {
        if(vag>nw&& nw*2<=ex)
        {
          //  int dif= ex-(vag*2);
          //  if(vag-dif>nw) cout<<nw<<endl;
            //else cout<<vag-dif<<endl;
            cout<<" nw "<<nw<<endl;
        }

        else cout<<" ex"<<ex<<endl;
    }
    return 0;

}
