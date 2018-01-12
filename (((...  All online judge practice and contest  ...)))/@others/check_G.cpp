#include <iostream>
#include <cstdio>
using namespace std;
#include <set>

int main ()
{
    int count = 0;
    std::set<std::string> s;
    std::cout << "Adding 'Hello' and 'World' to the set twice" << std::endl;

    s.insert("Hello");
    s.insert("World");
    s.insert("Hello");
    s.insert("World");
    s.insert("Mehadi");
    s.insert("Hasan");

    cout << sizeof(s) << endl;

    std::cout << "Set contains:";

    while (!s.empty())
    {
        //std::cout << ' ' << *s.begin();
        count++;
        s.erase(s.begin());
    }

    printf("%d",count);

    return 0;
}

