/// prev_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort, std::reverse

int main ()
{
    int myints[] = {1,2,5,3};

    std::sort (myints,myints+4);
    std::reverse (myints,myints+4);       /// next_permutation next theke permute kore and prev_permutation first theke permute kore...

    std::cout << "The 4! possible permutations with 4 elements:\n";
    do
    {
        std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << ' ' << myints[3] << '\n';

    }while ( std::prev_permutation(myints,myints+4) );

    std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << ' ' <<  myints[3] << '\n';

    return 0;
}
