/*

Write a recursive program that determines whether a given sentence is palindromic or not just considering the alpha-numeric characters ('a'-'z'), ('A'-'Z'), ('0'-'9').

Input:
madam, i'm adam
hulala
Output:
palindromic
not palindromic

*/

#include <bits/stdc++.h>
using namespace std;

string str;

int check_pali(int i,int j)
{
    if(i > j) return 1;
    if(i == j){
        if(str[i] == str[j]) return 1;
        else return 0;
    }
    if(str[i] != str[j]) return 0;

    check_pali(i+1,j-1);
}

int main()
{
    while(cin >> str)
    {
        int len = str.length();
        int ck = check_pali(0,len-1);
        if(ck == 1) printf("palindrome\n");
        else printf("not palindrome\n");
    }
    return 0;
}

/*

5
2 4 6 7 9

2
5 7

*/



