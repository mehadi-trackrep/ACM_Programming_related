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

    for(int i=0; i<len; i+=3) /// so, 3 len er part string swap/reverse...
    {
        if(len-ind >= 3){
            for(int j=0; j<1; j++)
            {
                temp = str[3+ind-j-1];
                str[3+ind-j-1] = str[ind];
                str[ind+j] = temp;
            }
            count++;
        }

        ind += 3;
    }

    if(len%3 == 0)
        cout << str;
    else{

//        cout << str << endl;
//        cerr << " " << count << endl;

        int x=len%3;
        int v = 3*count;
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
