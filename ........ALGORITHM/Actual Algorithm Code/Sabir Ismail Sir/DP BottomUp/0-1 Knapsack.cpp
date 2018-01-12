#include <bits/stdc++.h>
using namespace std;

#define mxn     100
#define mx      1000

int cost[mxn];
int weight[mx];

struct data
{
    vector <int> vec;
    int total_profit;
}M[mxn][mx];


int Max_weight,item;

void solution_print()
{
    vector <int> v;

    v = M[item][Max_weight].vec;

    for(int i=0; i<v.size(); i++) printf("%d ",v[i]);
}

void loop_knapsack()
{
    memset(M,0,sizeof(M));

    for(int i=1; i<=item; i++)
    {
        for(int j=1; j<=Max_weight; j++)
        {
            if(j-weight[i] >= 0)
            {
                if( M[i-1][j].total_profit <= (cost[i] + M[i-1][j-weight[i]].total_profit) )
                {
                    M[i][j].total_profit = cost[i] + M[i-1][j-weight[i]].total_profit;
                    vector <int> v;
                    v = M[i-1][j-weight[i]].vec;
                    v.push_back(i);
                    M[i][j].vec = v;
                }
                else
                {
                    M[i][j].total_profit = M[i-1][j].total_profit;
                    M[i][j].vec = M[i-1][j].vec;
                }
                //cerr <<  "item: " << i  << " and Max_weight: "  << j << " , M[i][j].total_profit: "  << M[i][j].total_profit << endl;
            }
            else{
                M[i][j].total_profit = M[i-1][j].total_profit;
                M[i][j].vec = M[i-1][j].vec;
            }

            cerr <<  "item: " << i  << " and Max_weight: "  << j << " , M[i][j]: "  << M[i][j].total_profit << endl;
            vector <int> v;

            v = M[i][j].vec;

            for(int i=0; i<v.size(); i++) printf("%d ",v[i]);

            cerr << ".................\n";
        }
    }

    cout << M[item][Max_weight].total_profit << endl;

    solution_print();
}

int main()
{
    cout << "Enter the max weight: " << endl;

    cin >> Max_weight;

    cout << "Enter The number of items: " << endl;

    cin >> item;

    cout << "Enter their weights: "<< endl;

    for(int i=1; i<=item; i++)
    {
        cin >> weight[i];
    }

    cout << "Enter their costs: "<< endl;

    for(int i=1; i<=item; i++)
    {
        cin >> cost[i];
    }


    loop_knapsack();

    return 0;
}

/*      /// Q: How many same ways that's why i can make the same maximum profit , (HARD)

10
4
4 2 4 6
5 6 2 0


10
12
4 2 4 6 5 3 2 1 6 7 8 10
5 6 2 0 1 4 3 3 1 0 4 9



10 4
10 40 30 50
5 4 6 3

5 4
3 4 5 60
1 2 3 5

5 4
3 4 5 6
1 2 3 4


10 4
3 4 5 6
1 2 3 4

10 4
5 6 7 8
2 4 6 8

30 40
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40
21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

*/
