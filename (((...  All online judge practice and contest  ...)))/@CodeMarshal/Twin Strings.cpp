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
/// Containers End


using namespace std;

int main()
{
    int tcas;
    scanf("%d",&tcas);
    while(tcas--)
    {
        string s1,s2;

        cin >> s1;
        getchar();
        cin >> s2;
        getchar();

        int len = s1.length();

        int ara[10005];

        memset(ara,0,sizeof(ara));

        int cnt1 = 0,cnt2 = 0;
        int ind;

        for(int i=0; i<len; i++)
        {
            ind = s1[i]-'a';
            if(ara[ind] == 0) {cnt1++; ara[ind] = 1; }
        }

        memset(ara,0,sizeof(ara));

        for(int i=0; i<len; i++)
        {
            ind = s2[i]-'a';
            if(ara[ind] == 0) {cnt2++; ara[ind] = 1; }
        }

        if(cnt1 == cnt2) printf("yes\n");
        else printf("no\n");

        //cerr << "s1: " << s1 << endl << "s2: " << s2 << endl;
    }

	return 0;
}

/// save test cases ...

/*

3
book meet
cola cold
book goat


*/
