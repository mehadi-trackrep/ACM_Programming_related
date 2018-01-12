/*

Implement binary search recursively, i.e. given an array of sorted integers, find a query integer from it.
Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.

Input:
5
1 2 3 4 5
2
3 -5
Output:
2
not found


*/

#include <bits/stdc++.h>
using namespace std;

int ara[100];
int n;
int q;

int binary_search(int l,int r,int x)
{
    int mid = (l+r)/2;

    if(l > r) return 0;

    if(ara[mid] == x)
    {
        printf("%d\n",mid);
        return 1;
    }

    if(ara[mid] < x) return binary_search(mid+1,r,x);
    if(ara[mid] > x) return binary_search(l,mid-1,x);
}

int main()
{
    while(cin >> n)
    {
        for(int i=0; i<n; i++) scanf("%d",&ara[i]);
        cin >> q;
        while(q--)
        {
            int a;
            cin >> a;
            int ck = binary_search(0,n-1,a);
            if(ck == 0) printf("not found\n");
        }
    }

    return 0;
}

/*

5
2 4 6 7 9

2
5 7

*/
