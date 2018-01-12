/// next_permutation example

#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
using namespace std;

int main ()
{

    int myints[] = {3,2,1};

    sort (myints,myints+3); /// eta must

    cout << "The 3! possible permutations with 3 elements:\n";   /// same vabe n ti element er jonno kora jabe...
    do
    {
        cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

    }while (next_permutation(myints,myints+3));

    cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

    return 0;
}
