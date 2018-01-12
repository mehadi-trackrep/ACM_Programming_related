
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    int l;
    int w;
};

bool comp(struct node a,struct node b)
{
    if(a.l==b.l)
        return a.w<b.w;
    else return a.l<b.l;
}


int main()
{
    int caseNum;
    cin>>caseNum;
    while(caseNum--)
    {
        int N;
        vector<node> sticks;
        cin>>N;
        for(int i=1; i<=N; ++i)
        {
            node tmp;
            cin>>tmp.l>>tmp.w;
            sticks.push_back(tmp);
        }

        sort(sticks.begin(),sticks.end(),comp);

        int *F=new int[N+1];
        int result=0;
        F[0]=1;

        for(int i=1; i<N; i++)
        {
            F[i]=1;
            for(int j=0; j<i; j++)
            {
                if(sticks[i].w<sticks[j].w)
                    F[i]=max(F[i],F[j]+1);
            }

            if(F[i]>result)

                result=F[i];
        }

        delete []F;

        cout<<result<<endl;
    }
    return 0;
}
