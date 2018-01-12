#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main( )
{
    vector<int> vec;
    for (int i=1; i<=6; i++) {
        vec.push_back(i);
    }

    cout << '\n';

    vec.erase(vec.begin());

    vector <int> :: iterator it;

    ///output:
    for (it=vec.begin(); it<vec.end(); it++) {
        cout << *it << " ";
    }

    cout << '\n';

    vec.erase(vec.begin()+2, vec.begin()+4); //................

    for (it=vec.begin(); it<vec.end(); it++) {
        cout << *it << " ";
    }

    cout << '\n';
}

