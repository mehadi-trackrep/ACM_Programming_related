#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;
    int c=1;
    int my_position,lift_position;  ///AC
    cin >> tcas;
    while(tcas--)
    {
        cin >> my_position >> lift_position;
        int total_time = 0;

        if(my_position >= lift_position) total_time += (my_position - lift_position)*4 + my_position*4 + 2*(3+5) + 3;
        else if(my_position < lift_position) total_time += lift_position*4 + 2*(3+5) + 3;

        printf("Case %d: %d\n",c++,total_time);

    }

    return 0;
}

/*

3
1 2
3 10
5 5

*/
