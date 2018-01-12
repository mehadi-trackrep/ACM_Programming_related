#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
using namespace std;
int main()
{

    int t;
    string input;
    int i = 0,total_substring;  /// TLE
    int cat_appearances = 0;

    scanf("%d",&t);
    getchar();

    string sub_string;
    int c = 1;

    while(t--){
        scanf("%d",&total_substring);
        getchar();
        getline(cin, input, '\n');
        cout << "Case " << c << ":" << endl;
        for(int j = 0;j < total_substring;j++){
            getline(cin, sub_string, '\n');
            cat_appearances = 0;

            for(i = input.find(sub_string, 0); i != string::npos; i = input.find(sub_string, i))
            {
                cat_appearances++;
                i++;
            }

            cout<<cat_appearances << endl;
        }
        c++;
    }

    return 0;
}

