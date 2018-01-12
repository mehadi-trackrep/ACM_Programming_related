#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Anna_win,Anna_loss,Betty_win,Betty_loss, Cindy_win,Cindy_loss,Zelda_win,Zelda_loss; ///AC
    while(1)
    {
        cin >> Betty_win >> Betty_loss >> Cindy_win >> Cindy_loss >> Zelda_win >> Zelda_loss;

        if(Betty_win == 0 && Betty_loss == 0 && Cindy_win == 0 && Cindy_loss == 0 && Zelda_win == 0 && Zelda_loss == 0) break;

        Anna_win = (Cindy_loss + Zelda_loss) - Betty_win;
        Anna_loss = (Cindy_win + Zelda_win) - Betty_loss;

        printf("Anna's won-loss record is %d-%d.\n",Anna_win,Anna_loss);
    }
    return 0;
}

/*

10 3 6 7 8 5
1874 2945 2030 2789 1025 3794
0 0 0 0 0 0

*/
