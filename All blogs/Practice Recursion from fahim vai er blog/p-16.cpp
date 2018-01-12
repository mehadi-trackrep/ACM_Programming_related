/*

Read a string from keyboard and print it in reversed order. You must not use any array to store the characters. Write a recursive solutions to solve this problem.

Input:
helloo
Output:
oolleh

*/

#include <bits/stdc++.h>
using namespace std;

void reverse_str()
{
    char ch;
    scanf("%c",&ch);
    if(ch == '\n') return ;
    reverse_str();
    printf("%c",ch);
}

int main()
{

    reverse_str();
    printf("\n");

    return 0;
}

/*

5
2 4 6 7 9

2
5 7

*/


