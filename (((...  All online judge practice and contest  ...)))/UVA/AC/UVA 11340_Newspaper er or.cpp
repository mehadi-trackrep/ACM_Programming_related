/*
     BISMILLAH HIR RAHMANIR RAHIM
*/

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
#define Max 5000007

int main()              ///AC
{
    int tcas;
    int nf;
    int nstr;
    string str;
    char ch;
    int val;

    cin >> tcas;

    while(tcas--)
    {
        cin >> nf;
        map <char,int> mp1;
        while(nf--)
        {
            cin >> ch >> val;
            mp1[ch] = val;
        }
        cin >> nstr;
        getchar();      /// that's V.V.I.

        map <char,int> mp2;

        while(nstr--)
        {
            getline(cin,str);

            int len = str.length();
            for(int i=0; i<len; i++)
            {
                mp2[str[i]]++;
            }

            //cerr << "---> " << str << endl;
        }

        map <char,int> :: iterator it;
        int sum = 0;

        for(it = mp2.begin(); it!=mp2.end(); it++)
        {
            sum += (it->second)*mp1[it->first];
//            if(mp1[it->first] > 0)
//            {
//                cerr << it->first << " ace " << it->second << " ti and it's frequency is: " << mp1[it->first] << endl;
//            }
        }

        printf("%.2lf$\n",(double)sum/100);
    }

	return 0;
}

/// save test cases ...

/*

1
7
a 3
W 10
A 100
, 10
k 7
. 3
I 13
7
ACM International Collegiate Programming Contest (abbreviated
as ACM-ICPC or just ICPC) is an annual multi-tiered competition
among the universities of the world. The ICPC challenges students
to set ever higher standards of excellence for themselves
through competition that rewards team work, problem analysis,
and rapid software development.
From Wikipedia.



*/

