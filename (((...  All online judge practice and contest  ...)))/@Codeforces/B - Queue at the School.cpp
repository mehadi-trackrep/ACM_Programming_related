#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    getchar();

    string str;
    getline(cin,str);   ///AC
//
//    for(int i=0; i<n; i++)
//    {
//        if(str[i] == 'B' && i+1 < n && str[i+1] == 'G')
//        {
//            int x=t;
//            int k = i+1;
//            char temp;
//            while(x--)
//            {
//                temp = str[k-1];
//                str[k-1] = str[k];
//                str[k] = temp;
//                k++;
//                if(str[k] != 'G') break;
//            }
//            i = k-1;
//            //cerr << "###: " << i << endl;
//        }
//    }
//
    int i;
    while(t>=1){
        for(i=0; i<n; i++)
        {
            if(str[i] == 'B' && i+1 < n && str[i+1] == 'G')
            {

                char temp;

                temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;

                i++;

            }
        }
        //cerr << "###: " << str << endl;
        t--;
    }

    cout << str << endl;

    return 0;
}

/*

3
RRG

5
RRRRR

4
BRBG

*/

