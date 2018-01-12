#include <bits/stdc++.h>
using namespace std;

int getMaxArea(int hist[], int n)
{
    stack<int> s;

    int max_area = 0;
    int tp;
    int area_with_top;

    int i = 0;
    while (i < n)
    {
        if (s.empty() || hist[s.top()] <= hist[i]){
            s.push(i++);
        }

        else
        {
            tp = s.top();
            s.pop();

            int index = (s.empty() ? i : i - s.top() - 1);
            area_with_top = hist[tp] * index;

            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        int index = (s.empty() ? i : i - s.top() - 1);
        area_with_top = hist[tp] * index;

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}

int main()
{
    int hist[30005];
    int n;
    int tcas;

    scanf("%d",&tcas);

    for(int i=1; i<=tcas; i++)
    {
        scanf("%d",&n);

        for(int j = 0; j<n; j++)
        {
            scanf("%d",&hist[j]);
        }

        printf("Case %d: %d\n",i,getMaxArea(hist, n));

    }
    return 0;
}

