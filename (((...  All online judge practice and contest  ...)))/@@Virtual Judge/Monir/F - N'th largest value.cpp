#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    vector <int> vec;   ///AC

    cin >> n;

    int x = n;
    int a;

    while(x--)
    {
        int t;
        cin >> t;
        vec.clear();

        for(int i=1; i<=10; i++)
        {
            scanf("%d",&a);
            vec.push_back(a);
        }

        sort(vec.begin(),vec.end());

        printf("%d %d\n",t,vec[7]);
    }

    return 0;
}

/*

4
1 1 2 3 4 5 6 7 8 9 1000
2 338 304 619 95 343 496 489 116 98 127
3 931 240 986 894 826 640 965 833 136 138
4 940 955 364 188 133 254 501 122 768 408

*/
