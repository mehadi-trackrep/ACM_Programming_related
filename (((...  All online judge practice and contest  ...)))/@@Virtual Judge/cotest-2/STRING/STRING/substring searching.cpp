#include <iostream>
#include <string>
using namespace std;
int main()
{

    string input;
    int i = 0;
    int cat_appearances = 0;

    getline(cin, input, '\n');

    for(i = input.find("cat", 0); i != string::npos; i = input.find("cat", i))
    {
        cat_appearances++;
        i++;  /// Move past the last discovered instance to avoid finding same
              /// string
    }

    cout<<cat_appearances;

    return 0;
}
