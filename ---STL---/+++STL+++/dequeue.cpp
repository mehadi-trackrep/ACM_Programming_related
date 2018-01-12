#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;
    int sz,q;

    cin >> tcas;

    for(int cas = 1; cas<=tcas; cas++)  ///AC
    {
        cin >> sz >> q;

        deque <int> dq;

        printf("Case %d:\n",cas);

        while(q--)
        {
            string str;
            cin >> str;

            if(str == "pushLeft")
            {
                int val;
                cin >> val;
                if(dq.size() < sz)
                {
                    dq.push_back(val);
                    printf("Pushed in left: %d\n",val);
                }
                else printf("The queue is full\n");
            }
            else if(str == "pushRight")
            {
                int val;
                cin >> val;
                if(dq.size() < sz)
                {
                    dq.push_front(val);
                    printf("Pushed in right: %d\n",val);
                }
                else printf("The queue is full\n");
            }
            else if(str == "popLeft")
            {
                int val;
                if(dq.size() > 0)
                {
                    val = dq.back();
                    printf("Popped from left: %d\n",val);
                    dq.pop_back();
                }
                else printf("The queue is empty\n");
            }
            else if(str == "popRight")
            {
                int val;
                if(dq.size() > 0)
                {
                    val = dq.front();
                    printf("Popped from right: %d\n",val);
                    dq.pop_front();
                }
                else printf("The queue is empty\n");
            }
        }
    }

    return 0;
}

/*


2
3 8
pushLeft 1
pushLeft 2
pushRight -1
pushRight 1
popLeft
popRight
popLeft
popRight
3 8
pushLeft 1
pushLeft 2
pushRight -1
pushRight 1
popLeft
popRight
popLeft
popRight


*/
