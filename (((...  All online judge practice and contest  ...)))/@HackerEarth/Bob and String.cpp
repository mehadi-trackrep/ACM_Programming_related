#include <iostream>
#include <cstdio>

using namespace std;

#define Max 1003

int timezone[Max][Max];

int main()
{

    int tcase,r,c;

    cin >> tcase;

    while(tcase--)
    {
        cin >> r >> c;

        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                scanf("%d",&timezone[i][j]);
            }
        }

        int x,y,time_ReverseFlash,time_Flash = 0,ck = 0;

        cin >> x >> y >> time_ReverseFlash;

        for(int i=1; i<=r; i++)
        {
            //cerr << "==>" << x << ' ' << y << endl;
            for(int j=1; j<=c; j++)
            {
                time_Flash += timezone[i][j];
                //printf(" %d ",timezone[i][j]);
                if(i == x && j == y){
                    ck = 1;
                    break;
                }
            }

            if(ck == 1)
                break;
        }

        //cerr << "==>" << time_Flash << time_ReverseFlash << endl;

        if(time_Flash > time_ReverseFlash)
            printf("NO\n");
        else if(time_Flash < time_ReverseFlash)
        {
            printf("YES\n");
            printf("%d\n",time_ReverseFlash-time_Flash+timezone[x][y]);
        }
        else if(time_Flash == time_ReverseFlash)
        {
            printf("YES\n");
            printf("%d\n",timezone[x][y]);
        }

    }

    return 0;
}

