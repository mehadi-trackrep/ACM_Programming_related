/*
     BISMILLAH HIR RAHMANIR RAHIM
*/

/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>

using namespace std;

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

#define mx	100005
#define mod	1000000007
#define INF	2147483647


/// I/O Start
#define sf                    scanf
#define pf                    printf

#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)

#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);


struct node
{
    int cnt,rem1,rem2,prop;
}tree[3*mx];

int cc;

void update_lazy(int node)
{
    cc = tree[node].rem2;
    tree[node].rem2 = tree[node].rem1;
    tree[node].rem1 = cc;
}

void update_node(int node)
{
    int l = node<<1;
    int r = l+1;
    int mov;
    tree[l].prop = (tree[l].prop + tree[node].prop)%3;
    tree[r].prop = (tree[r].prop + tree[node].prop)%3;

    mov = tree[node].prop%3;
    tree[node].prop = 0;

    while(mov--)
    {
        update_lazy(l);
        update_lazy(r);
    }
}

void build(int node,int i,int j)
{
    if(i == j)
    {
        tree[node].cnt = 1;
        tree[node].rem1 = 0;
        tree[node].rem2 = 0;
        tree[node].prop = 0;
        return ;
    }

    int mid = (i+j)>>1 , l = node<<1, r = l+1;

    build(l,i,mid);
    build(r,mid+1,j);

    tree[node].cnt = tree[l].cnt + tree[r].cnt;
    tree[node].rem1 = tree[l].rem1 + tree[r].rem1;
    tree[node].rem2 = tree[l].rem2 + tree[r].rem2;
    tree[node].prop = tree[node].prop + tree[node].prop;
}

void update(int node,int s,int e,int i,int j)
{
    if(s>j || e<i) return ;
    if(s>=i && e<=j)
    {
        update_lazy(node);
        tree[node].prop = (tree[node].prop + 1)%3;
        return ;
    }

    int mid = (s+e)>>1 , l = node<<1, r = l+1;

    if(tree[node].prop)
    {
        update_node(node);
    }

    update(l,s,mid,i,j);
    update(r,mid+1,e,i,j);

    tree[node].cnt = tree[l].cnt + tree[r].cnt;
    tree[node].rem1 = tree[l].rem1 + tree[r].rem1;
    tree[node].rem2 = tree[l].rem2 + tree[r].rem2;
}

int query(int node,int s,int e,int i,int j)
{
    if(s>j || e<i) return 0;
    if(s>=i && e<=j)
    {
        return tree[node].cnt;
    }

    int mid = (s+e)>>1 , l = node<<1, r = l+1;

    if(tree[node].prop)
    {
        update_node(node);
    }

    int a = query(l,s,mid,i,j);
    int b = query(r,mid+1,e,i,j);

    return a+b;
}

int main()
{
    int t,n,q,k,a,b,i;

    scanf("%d%d",&n,&q);

    build(1,1,n);

    while(q--)
    {
        sf3(k,a,b);

        if(k == 0) update(1,1,n,a+1,b+1);
        else printf("%d\n",query(1,1,n,a+1,b+1));
    }
}
