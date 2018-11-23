#include <bits/stdc++.h>
using namespace std;

int n,m,arr[105];

int main()
{
    int kmin, kmax;

    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    kmax = m + *max_element(arr, arr+n);

    for(int i=0; i<m; i++){
        int pos=-1;
        for(int j=0; j<n; j++){
            if(pos == -1 || arr[j] < arr[pos]) pos = j;
        }
        arr[pos]++;
    }

    kmin = *max_element(arr, arr+n);

    cout << kmin << " " << kmax << endl;

    return 0;
}
