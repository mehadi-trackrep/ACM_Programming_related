#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct Node
{
    int zeros, ones, twos;
    Node()
    {
        zeros = ones = twos = 0;
    }
    Node(const Node & left, const Node & right)
    {
        zeros = left.zeros + right.zeros;
        ones = left.ones + right.ones;
        twos = left.twos + right.twos;
    }
};

Node tree[800016];
int lazy[800016];

void build(int idx, int sfrom, int sto)
{
    if (sfrom == sto)
    {
        tree[idx].zeros = 1;
        return;
    }
    int left = idx<<1;
    int right = left+1;
    int mid = (sfrom + sto)>>1;
    build(left, sfrom, mid);
    build(right, mid+1, sto);
    tree[idx] = Node(tree[left], tree[right]);
}

void fix(int idx)
{
    lazy[idx] %= 3;
    if (lazy[idx] == 1)
    {
        swap(tree[idx].zeros, tree[idx].twos);
        swap(tree[idx].ones, tree[idx].twos);
    }
    else if (lazy[idx] == 2)
    {
        swap(tree[idx].zeros, tree[idx].ones);
        swap(tree[idx].ones, tree[idx].twos);
    }
    lazy[idx<<1] += lazy[idx];
    lazy[(idx<<1)+1] += lazy[idx];
    lazy[idx] = 0;
}

void update(int idx, int sfrom, int sto, int qfrom, int qto)
{
    if (sfrom == qfrom && sto == qto)
    {
        lazy[idx]+=1;
        fix(idx);
        return;
    }
    int left = idx<<1;
    int right = left+1;
    int mid = (sfrom+sto)>>1;
    if (lazy[idx]) fix(idx);
    if (qto <= mid)
    {
        update(left, sfrom, mid ,qfrom, qto);
    }
    else if (qfrom > mid)
    {
        update(right, mid+1, sto, qfrom, qto);
    }
    else
    {
        update(left, sfrom, mid, qfrom, mid);
        update(right, mid+1, sto, mid+1, qto);
    }
    fix(left);
    fix(right);
    tree[idx] = Node(tree[left], tree[right]);
}

int query(int idx, int sfrom, int sto, int qfrom, int qto)
{
    if (sfrom == qfrom && sto == qto)
    {
        fix(idx);
        return tree[idx].zeros;
    }
    int left = idx<<1;
    int right = left+1;
    int mid = (sfrom+sto)>>1;
    if (lazy[idx]) fix(idx);
    if (qto <= mid)
    {
        return query(left, sfrom, mid, qfrom, qto);
    }
    else if (qfrom > mid)
    {
        return query(right, mid+1, sto, qfrom, qto);
    }
    else
    {
        return query(left, sfrom, mid, qfrom, mid)
               + query(right, mid+1, sto, mid+1, qto);
    }
}

int main()
{
    cin.sync_with_stdio(0);
    int n,q;
    scanf("%d%d", &n, &q);
    build(1,1,n);
    int a,b,c;
    while (q--)
    {
        scanf("%d%d%d",&a,&b,&c);
        b+=1, c+=1;
        if (a == 0)
        {
            update(1,1,n,b,c);
        }
        else
        {
            printf("%dn", query(1,1,n,b,c));
        }
        //cout << "! " << lazy[1] << endl;
    }
    return 0;
}
