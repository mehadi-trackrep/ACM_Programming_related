#include<bits/stdc++.h>
using namespace std;
#define mx 100005
struct node
{
    int cnt,rem1,rem2,prop;
} tree[3*mx];
int cc;
void update_lazy(int node)
{
    cc=tree[node].rem2;
    tree[node].rem2=tree[node].rem1;
    tree[node].rem1=tree[node].cnt;
    tree[node].cnt=cc;
}
void update_node(int node)
{
    int l=node<<1,r=l+1,mov;
    tree[l].prop=(tree[l].prop+tree[node].prop)%3;
    tree[r].prop=(tree[r].prop+tree[node].prop)%3;
    mov=tree[node].prop%3;
    tree[node].prop=0;
    while(mov--)
    {
        update_lazy(l);
        update_lazy(r);
    }
}
void build(int node,int i,int j)
{
    if(i==j)
    {
        tree[node].cnt=1;
        tree[node].rem1=0;
        tree[node].rem2=0;
        tree[node].prop=0;
        return;
    }
    int mid=(i+j)>>1,l=node<<1,r=l+1;
    build(l,i,mid);
    build(r,mid+1,j);
    tree[node].cnt=tree[l].cnt+tree[r].cnt;
    tree[node].rem1=tree[l].rem1+tree[r].rem1;
    tree[node].rem2=tree[l].rem2+tree[r].rem2;
    tree[node].prop=tree[l].prop+tree[r].prop;
}
void update(int node,int s,int e,int i,int j)
{
    if(s>j || e<i) return;
    if(s>=i && e<=j)
    {
        cerr << "-->range- s and e: " << s << " " << e << endl;
        update_lazy(node);
        tree[node].prop=(tree[node].prop+1)%3;
        return;
    }

    int mid=(s+e)>>1,l=node<<1,r=l+1;
    if(tree[node].prop)
    {
        cerr << "+==>range- s and e: " << s << " " << e << endl;
        update_node(node);
    }
    update(l,s,mid,i,j);
    update(r,mid+1,e,i,j);
    tree[node].cnt=tree[l].cnt+tree[r].cnt;
    tree[node].rem1=tree[l].rem1+tree[r].rem1;
    tree[node].rem2=tree[l].rem2+tree[r].rem2;
}

int query(int node,int s,int e,int i,int j)
{
    if(s>j || e<i) return 0;
    if(s>=i && e<=j)
    {
        cerr << "-->range- s and e: " << s << " " << e << endl;
        return tree[node].cnt;
    }
    int mid=(s+e)>>1,l=node<<1,r=l+1,r1,r2;
    if(tree[node].prop)
    {
        cerr << "+==>range- s and e: " << s << " " << e << endl;
        update_node(node);
    }
    r1=query(l,s,mid,i,j);
    r2=query(r,mid+1,e,i,j);
    return r1+r2;
}

int main()
{
    int t,n,q,k,a,b,i;

        scanf("%d %d",&n,&q);
        build(1,1,n);
        while(q--)
        {
            scanf("%d %d %d",&k,&a,&b);
            if(k==0) update(1,1,n,a+1,b+1);
            else printf("%d\n",query(1,1,n,a+1,b+1));
        }

}

/***

4
0 1 2
-->range- s and e: 2 2
-->range- s and e: 3 3
0 1 3
-->range- s and e: 2 2
-->range- s and e: 3 4
1 0 0
-->range- s and e: 1 1
1
0 0 3
-->range- s and e: 1 4
1 3 3
+==>range- s and e: 1 4
+==>range- s and e: 3 4
-->range- s and e: 4 4
0
1 0 3
-->range- s and e: 1 4
2


***/
