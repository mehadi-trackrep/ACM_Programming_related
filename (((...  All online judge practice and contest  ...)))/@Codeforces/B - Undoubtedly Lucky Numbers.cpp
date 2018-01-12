#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    
    cin >> n;
    if(n <= 101)
        printf("%d\n",n);
    else{
        set <int> st;
        int count = 101,ck;
        for(int i=102; i<=n; i++)
        {
            ck = 0;
            st.clear();
            x = i;
            while(x != 0)
            {
                st.insert(x%10);
                x /= 10;
                if(st.size() > 2)
                {
                    ck = 1;
                    break;
                }
            }
            if(ck == 0)
                count++;
        }
        
        printf("%d\n",count);
    }
    
    return 0;
}

/*

3 3
1 4 7

*/