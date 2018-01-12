#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len = str.length();
    int count=0;
    int ind=0;
    char temp;

    for(int i=0; i<len; i+=5)
    {
        if(len-ind >= 5){
            for(int j=0; j<2; j++)
            {
                temp = str[5+ind-j-1];
                str[5+ind-j-1] = str[ind+j];
                str[ind+j] = temp;
            }
            count++;
        }

        ind += 5;
    }

    if(len%5 == 0)
        cout << str;
    else{

        int x=len%5;
        int v = 5*count;
        //cerr << "V: " << v << endl;
        //cerr << "x: " << x << endl;
        for(int i=1; i<x; i++)
        {
            //cerr << "check: i " << i << endl;;
            temp = str[len-i];
            str[len-i] = str[v];
            str[v] = temp;
            v++;
        }

        //cerr << "=> ";
        cout << str;
    }
}

/*

ABCDEFGH
AB
ABCD

*/

