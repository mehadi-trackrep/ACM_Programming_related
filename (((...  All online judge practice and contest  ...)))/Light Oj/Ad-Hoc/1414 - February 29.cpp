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
#include <deque>
#include <list>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    map <string, int> mp;

    for(int i=1; i<=12; i++){
        s = months[i-1];
        mp[s] = i;
    }

    int tc,ans;

    cin >> tc;

    string m1,m2;
    int d1,d2,y1,y2;
    char ch;

    for(int cs=1; cs<=tc; cs++){

        cin >> m1 >> d1 >> ch >> y1;
        cin >> m2 >> d2 >> ch >> y2;

        if(mp[m1]>2) y1++; // starting month jodi February er niche hoy taile ei Year leap year na.
        if(mp[m2]<2 || (mp[m2]==2 && d2<29)) y2--; // ending month jodi February er cheye boro or same with day == 29 na hoy tahole ei Year o leap year na...

        ans = y2/4 - (y1-1)/4; /// 1 to y2 er moddhe total 4 dara divisible - 1 to (y1-1) er moddhe total 4 dara divisible ber korle
                               /// y1 to y2 er moddhe shob gula paoa jabe ... [y1-1 er karon y1 er ta jate bad na jay... se jonno tar ag porjonto..]
        ans -= y2/100 - (y1-1)/100;
        ans += y2/400 - (y1-1)/400;

//        printf("m1,m2: ");
//        cout << m1 << " " << m2 << endl;
//        printf("y1,y2: %d %d\n",y1,y2);

        printf("Case %d: %d\n",cs,ans);

    }

    return 0;
}


/***


4
January 12, 2012
March 19, 2012
August 12, 2899
August 12, 2901
August 12, 2000
August 12, 2005
February 29, 2004
February 29, 2012

***/
