#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int count = 0;
        int vis[31625] = {0};
        int a =  (int)(sqrt((double)N));
        //cerr << "###" << a << endl;
        if(a*a == N)
            count += 4;
        else if(a*a + a*a == N)
            count += 4;
        for(int i=1; i<a; i++)
        {
            int ck = (N-i*i);
            //cerr << "###" << ck << endl;
            int x = (int)(sqrt((double)ck));
            if(( (double)sqrt((double)ck) - x )  == 0){
                if(vis[x] == 0 && vis[i] == 0)
                {
                    vis[x] = 1;
                    vis[i] = 1;
                    count += 8;
                }
            }
        }
        
        printf("%d\n",count);
    }

    return 0;
}
