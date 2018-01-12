// lower_bound/upper_bound example

#include <bits/stdc++.h>
using namespace std;

int main () {

  int myints[] = {10,20,30,30,20,10,10,20};

  vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

  vector<int>::iterator low,up;

  low = std::lower_bound (v.begin(), v.end(), 20); /// ekhettere low and up a ekta address assign hoy ,
                                                /// so actually sort korar por 0 theke lower 20 porjonto kotogula value
                                                /// ace ta jante hole v.begin() address ta subtract korte hobe ,taile
                                                /// integer value paoa jabe ...
  up = std::upper_bound (v.begin(), v.end(), 20); /// ekhaneo same but 0 to upper 20 porjonto ... ans: 6 ti

  //cerr <<   low << ' ' << up << endl;

  cout << "lower_bound at position " << (low- v.begin()) << '\n';
  cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}
