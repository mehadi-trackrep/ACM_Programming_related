#include <bits/stdc++.h>
using namespace std;

int main()
{

    int len1,len2;

    string str1;
    string str2;

    cin >> str1 >> str2;

    len1 = str1.length();
    len2 = str2.length();

    if(len2 > len1)
    {
        int total = 0;
        int sum = 0;

        for(int i=0; i<(len2-len1+1); i++)
        {
            for(int j=i,k=0; j<(len1+i); j++)
            {
                sum += abs(str1[k++]-str2[j]);
            }
            total += sum;
        }

        printf("%d\n",sum);

    }
    else
    {
        int sum = 0;

        for(int i=0; i<len1; i++)
        {
            sum += abs((str1[i]-'0') - (str2[i]-'0'));
        }

        printf("%d\n",sum);
    }

    return 0;

}

