#include <bits/stdc++.h>
using namespace std;
vector <int> num;
int main()
{
    int n,x;
    
    set <int> st;
    int count = 101,ck;
    for(int i=102; i<=1000000; i++)
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
        if(ck == 0){
            count++;
            num.push_back(count);
        }
        num.push_back(count);
    }
    
    while(cin >> n)
    {
        if(n <= 101)
            printf("%d\n",n);
        else{
            printf("%d\n",num[n-102]);
        }
    }
    
    return 0;
}

/*

3 3
1 4 7

*/