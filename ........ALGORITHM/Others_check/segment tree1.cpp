#include <bits/stdc++.h>
using namespace std;

#define Max 100000+10
#define ll long long


int ara[Max];
ll tree[3*Max];

int last_node;

void build(int node,int l,int u);

int main()
{
    int n;

    cin >> n;

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int segment_number = 1;
    int l = 1;      /// l means lower_bound
    int u = n;      /// u means upper_bound

    build(segment_number,l,u);

    for(int i=1; i<=last_node; i++)
    {
        cerr << "--> " << tree[i] << endl;
    }

    return 0;
}


void build(int node,int l,int u)
{
    if(l == u)
    {
        tree[node] = ara[l];
        //++last_node;
        return ;
    }

    int left_node = 2*node;
    int right_node = left_node + 1;

    int mid = (l+u)/2;

    build(left_node,l,mid);
    ++last_node;
    build(right_node,mid+1,u);

    tree[node] = ara[left_node] + ara[right_node];

    ++last_node;
}


/*

7
4 -9 3 7 1 0 2

*/
