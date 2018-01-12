#include <bits/stdc++.h>
using namespace std;
#define Max 5000007

int main()
{
    int n;
    while(cin >> n)
    {
        int a,b;
        int ck_st = 1,ck_pq = 1,ck_q = 1;       ///AC

        stack <int> st;
        queue <int> q;
        priority_queue <int> pq;

        for(int i=1; i<=n; i++)
        {
            scanf("%d%d",&a,&b);
            if(a == 1)
            {
                st.push(b);
                q.push(b);
                pq.push(b);
            }
            else
            {
                int x,y,z;

                if(st.size() >= 1)
                {
                    x = st.top();
                    st.pop();
                }
                else ck_st = 0;

                if(q.size() >= 1)
                {
                    y = q.front();
                    q.pop();
                }
                else ck_q = 0;

                if(pq.size() >= 1)
                {
                    z = pq.top();
                    pq.pop();
                }
                else ck_pq = 0;

                if(ck_st && x != b) ck_st = 0;
                if(ck_q && y != b) ck_q = 0;
                if(ck_pq && z != b) ck_pq = 0;
            }
        }

        if(ck_st && !ck_q && !ck_pq) printf("stack\n");
        else if(!ck_st && ck_q && !ck_pq) printf("queue\n");
        else if(!ck_st && !ck_q && ck_pq) printf("priority queue\n");
        else if(!ck_st && !ck_q && !ck_pq) printf("impossible\n");
        else printf("not sure\n");
    }

	return 0;
}

/// save test cases ...

/*

6
1 1
1 2
1 3
2 1
2 2
2 3
6
1 1
1 2
1 3
2 3
2 2
2 1
2
1 1
2 2
4
1 2
1 1
2 1
2 2
7
1 2
1 5
1 1
1 3
2 5
1 4
2 4


*/
