#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int n;
    while(scanf("%d",&n) && n != 0)
    {
        while(scanf("%d",&a[0]) && a[0] != 0)
        {
            for(int i=1; i<n; i++) scanf("%d",&a[i]);
            stack <int> st;
            int j=1;
            int i=0;

            for(j=1; j<=n;)
            {
                if(!st.empty() && st.top() == a[i]) {i++; st.pop(); continue;}
                else if(a[i] == j) {i++; j++; continue;}
                else {st.push(j); j++;}

            }
            int ok = 1;
            for(i; i<n; i++)
            {
                if(st.top() != a[i]) {ok = 0; break;}
                else st.pop();
            }

            if(ok) printf("Yes\n");
            else printf("No\n");

        }

        putchar('\n');
    }

    return 0;
}

/*


5
1 2 3 4 5
5 4 1 2 3
1 4 3 2 5
3 4 2 5 1
3 4 2 1 5
4 3 5 2 1
0
0

*/
