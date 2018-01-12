/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>
using namespace std;
#define N 5000007
#define ll long long

int main()
{
    string str;
    int c=1;

    while(cin >> str)                   ///AC
    {
        int len = str.length();

        int bi = 1,oc = 1,dec = 1,hex = 1;
        int nbi = 0,noc = 0,ndec = 0,nhex = 0;
        int ibi,ioc,idec,ihex;
        int cbi = 0,coc = 0,cdec = 0,chex = 0;

        for(int i=0; i<len; i++)
        {
            if(bi == 1 && (str[i] == '0' || str[i] == '1' || str[i] == '.'))
            {
                if(nbi == 0 && str[i] == '.')
                    nbi = 1;
                else if(nbi == 1)
                {
                    if(str[i] == '0' || str[i] == '1') cbi = 1;
                    if(str[i] == '.') bi = 0;
                }
            }
            else bi = 0;

            if(oc == 1 && ((str[i] >= '0' && str[i] <= '7') || str[i] == '.'))
            {
                if(noc == 0 && str[i] == '.')
                    noc = 1;
                else if(noc == 1)
                {
                    if((str[i] >= '0' && str[i] <= '7')) coc = 1;
                    if(str[i] == '.') oc = 0;
                }
            }
            else oc = 0;

            if(dec == 1 && ((str[i] >= '0' && str[i] <= '9') || str[i] == '.'))
            {
                if(ndec == 0 && str[i] == '.')
                    ndec = 1;
                else if(ndec == 1)
                {
                    if((str[i] >= '0' && str[i] <= '9')) cdec = 1;
                    if(str[i] == '.') dec = 0;
                }
            }
            else dec = 0;

            if( hex == 1 && ( (str[i] >= '0' && str[i] <= '9') || str[i] == '.' || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F') ) )
            {
                if(nhex == 0 && str[i] == '.')
                    nhex = 1;
                else if(nhex == 1)
                {
                    if((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')) chex = 1;
                    if(str[i] == '.') hex = 0;
                }
            }
            else hex = 0;
        }

        if(bi == 1)
        {
            if((nbi == 1 && cbi == 1) || nbi != 1)
                printf("Case %d: binary, octal, decimal & hexadecimal\n",c++);
        }
        else if(oc == 1)
        {
            if((noc == 1 && coc == 1) || noc != 1)
                printf("Case %d: octal, decimal & hexadecimal\n",c++);
        }
        else if(dec == 1)
        {
            if((ndec == 1 && cdec == 1) || ndec != 1)
                printf("Case %d: decimal & hexadecimal\n",c++);
        }
        else if(hex == 1)
        {
            if((nhex == 1 && chex == 1) || nhex != 1)
                printf("Case %d: hexadecimal\n",c++);
        }
        else printf("Case %d: habijabi number\n",c++);
    }

	return 0;
}

/// save test cases ...

/*

10110
1234
1abcdef2.ABCDEF09


*/


