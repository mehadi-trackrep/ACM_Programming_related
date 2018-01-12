#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        if(str == "end") break; ///AC

        int len = str.length();

        int v=0,vc=1,occ=1; /// sobgula 1 holeyi acceptable hobe...

        for(int i=0; i<len; i++)
        {
            if(v == 0 && (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) v=1;
            if(i+1 < len && str[i] == str[i+1])
            {
                if(str[i] != 'e' && str[i] != 'o')
                {
                    vc = 0;
                    break;
                }
            }
            if(i+2 < len)
            {
                if( (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') &&
                    (str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' || str[i+1] == 'o' || str[i+1] == 'u') &&
                    (str[i+2] == 'a' || str[i+2] == 'e' || str[i+2] == 'i' || str[i+2] == 'o' || str[i+2] == 'u') )
                {
                    occ = 0;
                    break;
                }
                else if( (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') &&
                    (str[i+1] != 'a' && str[i+1] != 'e' && str[i+1] != 'i' && str[i+1] != 'o' && str[i+1] != 'u') &&
                    (str[i+2] != 'a' && str[i+2] != 'e' && str[i+2] != 'i' && str[i+2] != 'o' && str[i+2] != 'u') )
                {
                    occ = 0;
                    break;
                }
            }

        }

        if(v == 1 && vc == 1 && occ == 1) cout << '<' << str << '>' << " is acceptable.\n";
        else cout << '<' << str << '>' << " is not acceptable.\n";
    }
    return 0;
}

/*

a
tv
ptoui
bontres
zoggax
wiinq
eep
houctuh
end

*/
