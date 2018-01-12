#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long
#define M 100
#define check cerr << "####=>"

string str[2005];

int main()
{

    int i=0;

    while(1)
    {
        getline(cin,str[i]);

        //int len = str[i].length();
        int len = strlen(str[i]);
        int ck=0;

        for(int j=0; j<len; j++)
        {
            if(str[j] == '/' && str[j+1] == '/')
            {
                ck = 1;
            }
            if(ck == 0 && str[j] == '-' && str[j+1] == '>')
            {
                printf(".");
                j++;
                continue;
            }

            printf("%c",str[j]);
        }

        i++;

        printf("\n");
    }

    return 0;
}
