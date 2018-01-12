/*

Implement linear search recursively, i.e. given an array of integers, find a specific value from it.
Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.

Input:
5
2 9 4 7 6
2
5 9
Output:
not found
1


*/

#include <bits/stdc++.h>
using namespace std;

int ara[100];
int n;
int q;

int linear_search(int i,int x)
{
    if(i == n) return 0;
    if(ara[i] == x)
    {
        printf("%d\n",i); /// position
        return 1;
    }
    return linear_search(i+1,x);
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
            int ck = linear_search(0,a);
            if(ck == 0) printf("not found\n");
        }
    }

    return 0;
}









