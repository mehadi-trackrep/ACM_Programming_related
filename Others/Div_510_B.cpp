#include <bits/stdc++.h>
using namespace std;

#define inf 1000000

int n,costs[1005];
vector<string> vitamins;

int main()
{
    long long int min_cost=inf, min_a=inf, min_b=inf, min_c=inf, min_abc=inf;

    cin >> n;
    string s;

    for(int i=0; i<n; i++)
    {
        cin >> costs[i];
        cin >> s;
        vitamins.push_back(s);
    }

    for(int i=0; i<n; i++)
    {
        if(vitamins[i] == "A" && costs[i] < min_a) min_a = costs[i];
        if(vitamins[i] == "B" && costs[i] < min_b) min_b = costs[i];
        if(vitamins[i] == "C" && costs[i] < min_c) min_c = costs[i];
        if(vitamins[i].size() == 3 && costs[i] < min_abc) min_abc = costs[i];
    }

    if(min_a != inf && min_b != inf && min_c != inf) min_cost = min_a + min_b + min_c;
    if(min_abc != inf && min_abc < min_cost) min_cost = min_abc;

    //cerr << " --> " << min_cost << endl;

    int a=0,b=0,c=0;
    for(int i=0; i<n; i++)
    {

//        cerr << " pos: " << vitamins[i].find("A") << endl;

        if(vitamins[i].find("A") <= 3) a=1;
        if(vitamins[i].find("B") <= 3) b=1;
        if(vitamins[i].find("C") <= 3) c=1;

        //cerr << " -=-=- string: " << vitamins[i] << " a,b,c: " << a << ' ' << b << ' ' << c << endl;

        for(int j=i+1; j<n; j++)
        {
            if(a+b+c == 1 && vitamins[j].size() == 2)
            {
                if(a == 1)
                {
                    if(vitamins[j].find("B") <= 3 && vitamins[j].find("C") <= 3){
                        if(costs[i]+costs[j] < min_cost) min_cost = costs[i]+costs[j];
                    }
                }
                else if(b == 1)
                {
                    if(vitamins[j].find("A") <= 3 && vitamins[j].find("C") <= 3){
                        if(costs[i]+costs[j] < min_cost) min_cost = costs[i]+costs[j];
                    }
                }
                else
                {
                    if(vitamins[j].find("B") <= 3 && vitamins[j].find("A") <= 3){
                        if(costs[i]+costs[j] < min_cost) min_cost = costs[i]+costs[j];
                    }
                }
            }
            else if(a+b+c == 2 && vitamins[j].size() <= 2)
            {
                // cerr << " ==> " << vitamins[i] << " -- " << vitamins[j] << endl;
                if(a == 1 && b == 1)
                {
                    if(vitamins[j].find("C") <= 3){
                        if(costs[i]+costs[j] < min_cost) min_cost = costs[i]+costs[j];
                    }
                }
                else if(a == 1 && c == 1)
                {
                    if(vitamins[j].find("B") <= 3){
                        if(costs[i]+costs[j] < min_cost) min_cost = costs[i]+costs[j];
                    }
                }
                else if(b == 1 && c == 1)
                {
                    if(vitamins[j].find("A") <= 3){
                        if(costs[i]+costs[j] < min_cost) min_cost = costs[i]+costs[j];
                    }
                }
            }
        }
        a = 0;
        b = 0;
        c = 0;
    }

    if(min_cost == inf) cout << -1 << endl;
    else cout << min_cost << endl;


    return 0;
}

