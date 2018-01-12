#include <bits/stdc++.h>
using namespace std;

int main()
{
    double temp;
    double diff;
    stack <double> st;
    while(cin >> temp)
    {
        if(temp == 999.0) break;

        if(st.size() == 0) st.push(temp);   ///AC
        else if(st.size() == 1)
        {
            diff = temp - st.top();
            st.pop();
            st.push(temp);
            printf("%.2lf\n",diff);
        }
    }
    printf("End of Output\n");
    return 0;
}

/*

10.0
12.05
30.25
20
999

*/

/*



*/

