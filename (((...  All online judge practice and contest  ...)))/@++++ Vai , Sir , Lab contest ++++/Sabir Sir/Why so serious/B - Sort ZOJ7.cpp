#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    //char ara[] = {Z,O,J,7};

    char str1[1000];
//    string Z;
//    string O;
//    string J;
//    string seven;

    char Z[1000];
    char O[1000];
    char J[1000];
    char seven[1000];       ///AC

    while(cin >> str)
    {
        //cerr << str << endl;

        getchar();
        int len = str.length();
        int k=0;
        int z = 0,o = 0,j = 0,sev = 0;

        for(int i=0; i<len; i++)
        {
            if(str[i] == 'Z')
                Z[z++] = str[i];
            else if(str[i] == 'O')
                O[o++] = str[i];
            else if(str[i] == 'J')
                J[j++] = str[i];
            else if(str[i] == '7')
                seven[sev++] = str[i];
            else
                str1[k++] = str[i];
        }

        cerr << Z << endl;

        Z[z] = '\0';
        O[o] = '\0';
        J[j] = '\0';
        seven[sev] = '\0';
        str1[k] = '\0';

        cout << Z << O << J << seven << str1 << endl;
    }

    return 0;
}
