#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    int arr[12];
    int i, j, K, sum = 0;

    scanf("%d", &K);

    for(i = 0; i < 12; i++)
        scanf("%d", &arr[i]);

    if(K == 0)
        printf("0\n");

    else
    {
        sort(arr,arr+12);

//        for(i = 0; i < 12; i++)
//            printf("%d ",arr[i]);

        for(i = 11, j = 0; i >= 0; i--) ///AC
        {
            sum += arr[i];
            j++;

            if(sum >= K)
                break;
        }

         printf("%d\n",(sum < K) ? -1 : j) ;

    }

    return 0;
}
