#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    ///getline(cin,str,'\n');or,:

//    cin >> str;
//    cout << "--> :P " << str << endl;

    while(getline(cin,str))
    {
        if(str[0] == '\0') break;

        stringstream ss(str);

        int num;
        vector <int> vec;

while(ss >> num)/// ss >> num means, ss theke ekta ekta kore value input nicce (or, num a rakhce) ... like as " cin >> num "
    vec.push_back(num);
//sort (vec.begin(),vec.end());
        int i = 0;

        while(!vec.empty()){
            cout << vec[i] << endl;
            vec.pop_back();
            i++;
        }

    }

    return 0;
}
