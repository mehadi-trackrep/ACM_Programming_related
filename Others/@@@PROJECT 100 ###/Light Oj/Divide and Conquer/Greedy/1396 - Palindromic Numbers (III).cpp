#include <bits/stdc++.h>
using namespace std;
string str;
void convert_pall(int len)  /// other test case a problem ace...
{
    int i,j;
    
    if(len % 2 == 0)
    {
        int count = 0;
        for(i=0; i<len/2;i++)
        {
             if(str[i] == '9' && str[len-i-1] == '9')
                count++;
             else break;
        }
        if(count == len/2)  /// 1.
        {
            //cerr << "check->count" << endl;
            printf("1");
            for(i=1; i<=len-1;i++)
            {
                 printf("0");
            }
            printf("1\n");
            return ;
        }
        
        int ck1=0,ck2=-1;/// pallindrome ki na...
        for(i=0; i<len/2;i++)
        {
            if(str[i] > str[len-i-1])
            {
                ck2 = 1;
                ck1 = 1;
                str[len-i-1] = str[i];
            }
            else if(str[i] < str[len-i-1])
            {
                ck2 = 0;
                ck1 = 1;
                str[len-i-1] = str[i];
            }
        }
        if(ck1 == 0)    ///2.
        {
            //cerr << "check->ck1" << endl;
            if(str[len/2-1] == '9' && str[len/2] == '9')
            {
                str[len/2-1] = '0' ; str[len/2] = '0';
                str[len/2-2] += 1; str[len/2+1] += 1;
            }
            else
            {
                str[len/2-1] += 1; str[len/2] += 1;
            }
            cout << str << endl;
            return ;
        }
        else if(ck2 == 0)   ///3.
        {
            if(str[len/2-1] == '9' && str[len/2] == '9')
            {
                str[len/2-1] = '0' ; str[len/2] = '0';
                str[len/2-2] += 1; str[len/2+1] += 1;
            }
            else
            {
                str[len/2-1] += 1; str[len/2] += 1;
            }
            cout << str << endl;
            return ;
        }
        else    ///4.
        {
            cout << str << endl;
            return ;
        }
    }
    else
    {
        int count = 0;
        for(i=0; i<=len/2;i++)
        {
             if(str[i] == '9' && str[len-i-1] == '9')
                count++;
             else
                break;
        }
        if(count == (len/2)+1)
        {
            //cerr << "check->count" << endl;
            printf("1");
            for(i=1; i<=len-1;i++)
            {
                 printf("0");
            }
            printf("1\n");
            return ;
        }
        
        int ck1=0,ck2=-1;/// pallindrome ki na...
        for(i=0; i<len/2;i++)
        {
            if(str[i] > str[len-i-1])
            {
                ck2 = 1;
                ck1 = 1;
                str[len-i-1] = str[i];
            }
            else if(str[i] < str[len-i-1])
            {
                ck2 = 0;
                ck1 = 1;
                str[len-i-1] = str[i];
            }
        }
        if(ck1 == 0) /// if input string is palindrome
        {
            if(str[len/2] == '9')
            {
                str[len/2] = '0' ;
                str[len/2-1] += 1; str[len/2+1] += 1;
            }
            else
            {
                str[len/2] += 1;
            }
            cout << str << endl;
            return ;
        }
        else if(ck2 == 0)
        {
            if(str[len/2] == '9')
            {
                str[len/2] = '0' ;
                str[len/2-1] += 1; str[len/2+1] += 1;
            }
            else
            {
                str[len/2] += 1;
            }
            cout << str << endl;
            return ;
        }
        else
        {
            cout << str << endl;
            return ;
        }
        
    }
      
}

int main()
{
    int c=1,tcas;
    cin >> tcas;
    getchar();
    while(tcas--)
    {
        cin >> str;
        int len = str.length();
        printf("Case %d: ",c++);
        convert_pall(len);
    }
    return 0;
}

/*

6
1111
1991
9999
129931
12199123
12099123

14
11111
19291
999
9
19291
12922
12921
989
8999
89999
87777
98999
99989
99998


*/