#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define ve (vc.begin(),vc.end())
#define mod 1000000007
#define m0 memset(a,0,sizeof(a))
#define ms memset(a,-1,sizeof(a))
#define mc memset(s,'0',sizeof(s))
#define mv memset(visit, o, sizeof(visit))
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()

char s[100100];

int big()
{
    int l = strlen(s);
    int flag = 1;       /// means sob 9999...
    int p, q;

    if(l % 2 == 1)  /// p and q are the most significant bit ...
    {
        p = l /2;
        q = l/2;
    }
    else
    {
        p = (l/2)-1;
        q = p+1;
    }

    for(; p >= 0; p--)
    {
        if(s[p] == '9')
        {
            s[p] = '0';
            s[q] = '0';
        }
        else
        {
            s[p] = (char)((int)s[p]+1);
            s[q] = s[p];
            flag = 0;   /// etai output ...
            break;
        }
        q++;
    }

    return flag;
}

int main()
{
    int t;
    sf("%d ", &t);
    for(int i = 1; i <= t; i++)
    {
        gets(s);
        int flag = 1;   /// for palindrome
        int t = 0;  /// dhori palindrome korte number ti simply boro thakbe...
        int l = strlen(s);
        int f = l-1;

        for(int j = 0; j <= l/2; j++)   /// randomly palindrome korar por jodi number ti (small)soto or, input number ti i jodi palindrome thake
                                        /// taholeyi kabol change korte hobe ...
        {
            if(s[j] != s[f])
            {
                if(s[j] < s[f])
                {
                    s[f] = s[j];
                    t = 1;      /// t = 1 means ekhon number ti ager cheye small hoye gece...
                }
                else
                {
                    s[f] = s[j];
                    t = 0;
                }
                flag = 0;
            }
            f--;
        }

        if(flag || t)
        {
            if(big())
            {
                s[0] = '1';
                int j;
                for(j = 1; j < l; j++)
                    s[j] = '0';
                s[j] = '1';
                s[j+1] = '\0';
                pf("Case %d: ", i);
                puts(s);
            }
            else
            {
                pf("Case %d: ", i);
                puts(s);
            }
        }
        else
        {
            pf("Case %d: ", i);
            puts(s);
        }

    }


    return 0;
}
