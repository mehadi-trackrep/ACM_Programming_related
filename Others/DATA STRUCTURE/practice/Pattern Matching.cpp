#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    int len1 = str1.length(),len2 = str2.length();
    int j = 0;
    for(int i=0; i<len1; i++)
    {
        if(str1[i] == str2[j])
            j++;
        else
            j = 0;
        
        //cerr << "###" << j << "  ";
        
        if(j == len2)
        {
            break;
        }
    }
    
    if(j == len2)
        printf("YES\n");
    else
        printf("NO\n");
        
    return 0;
}
