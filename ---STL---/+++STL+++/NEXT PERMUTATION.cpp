#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    vector <int> vec;
    for(int i = 1;i <= 3;i++)
        vec.push_back(i);
    int sum = 0,i = 0;
    vector <int> :: iterator it;
    do{
        for(it = vec.begin();it < vec.end();it++)
            printf("%d ",*it);
        cout << '\n';
    }while( next_permutation( vec.begin(), vec.end() ) );
    return 0;
}

