#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    vector< int > nacho;

    for(int i = 0;i < 5;i++)
        nacho.push_back(i);

    reverse( nacho.begin(), nacho.end() ); /// header file problem


    return 0;
}

