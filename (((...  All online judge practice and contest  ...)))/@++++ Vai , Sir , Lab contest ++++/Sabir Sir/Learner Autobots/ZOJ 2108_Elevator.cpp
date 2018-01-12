#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(1)
    {
        getline(cin,str);

        if(str == "0")
            break;

        int len = str.length();

        int total_cost = 0;

        total_cost = (str[0]-'0')*6;

        if(len == 3)
        {
            if( (str[0]-'0') < (str[2]-'0') )
            {
                total_cost += ((str[2]-'0') - (str[0]-'0'))*6;
            }
            else if( (str[0]-'0') > (str[2]-'0') )
            {
                total_cost += ((str[0]-'0') - (str[2]-'0'))*4;
            }
        }
        else if(len > 3)
        {

            for(int i=0; i<len-1; i+=2)
            {
                if( (str[i]-'0') < (str[i+2]-'0') )
                {
                    total_cost += ((str[i+2]-'0') - (str[i]-'0'))*6;
                }
                else if( (str[i]-'0') > (str[i+2]-'0') )
                {
                    total_cost += ((str[i]-'0') - (str[i+2]-'0'))*4;
                }
            }
        }

        total_cost += 5;

        printf("%d\n",total_cost);
    }

    return 0;
}

/*

1 2
3 2 3 1
0

*/
