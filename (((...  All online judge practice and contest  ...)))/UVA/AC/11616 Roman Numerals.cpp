#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <bitset>

#define D(x) cout << #x " is " << x << endl

using namespace std;

string str;
int len;

string uni[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
string deci[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
string cen[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
string mil[4] = {"", "M", "MM", "MMM"};

string arabic_To_Roman(int num)
{

    int nUni = num % 10;
        num /= 10;
    int nDec = num  % 10;
        num /= 10;
    int nCen = num % 10;
        num /= 10;
    int nMil = num % 10;

    string ans = mil[nMil];

    ans += cen[nCen];
    ans += deci[nDec];
    ans += uni[nUni];

    return ans;
}

int roman_To_Arabic()
{
    map <char,int> mp;

    mp['I'] = 1,mp['V'] = 5,mp['X'] = 10,mp['L'] = 50,mp['C'] = 100,
    mp['D'] = 500,mp['M'] = 1000;

    int value = 0,ck1,ck2;

    for(int i=0; i<len; i++)
    {
        ck1 = mp[str[i]];
        ck2 = mp[str[i+1]];

        if(ck1 < ck2){
            value += (ck2-ck1);
            i++;
        }
        else
            value += ck1;
    }

    return value;
}

int main()
{
    while(getline(cin, str))
    {

        int ck_digit = 0,ck_letter = 0;

        if( (str[0]-'0') >= 0 && (str[0]-'0') <= 9 )
            ck_digit = 1;
        else
            ck_letter = 1;

        len = str.length();
        int num = 0;

        if (ck_digit == 1)
        {
            for(int i=0; i<len; i++)
            {
                num = num*10 + (str[i]-'0');
            }
            cout << arabic_To_Roman(num) << endl;
        }
        else
        {
            cout << roman_To_Arabic() << endl;
        }
    }

    return 0;
}
