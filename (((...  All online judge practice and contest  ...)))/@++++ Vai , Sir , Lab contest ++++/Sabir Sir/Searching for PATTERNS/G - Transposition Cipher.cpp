#include <bits/stdc++.h>
using namespace std;

struct data
{
    int index;
    char ch;
    bool operator < (const data &p)const
    {
        return ch <= p.ch;
    }
};

vector <data> vec;

int main()
{
    int tcas;

    cin >> tcas;

    getchar();

    while(tcas--)
    {
        string key;
        string cipher_text;

        getline(cin,key);
        getline(cin,cipher_text);

        int len1 = key.length();
        int len2 = cipher_text.length();

        int avg = len2/len1;
        int Max = len2%len1; /// ti te avg+1 ti element ace...

        vec.clear();

        for(int i=0; i<len1; i++)
        {
            data get;
            get.index = i;
            get.ch = key[i];

            vec.push_back(get);
        }

        sort(vec.begin(),vec.end());

//        cerr << "len1: " << len1 << endl;
//        cerr << "len2: " << len2 << endl;
//
//        cerr << "avg: " << avg << endl;
//        cerr << "Max: " << Max << endl;

        for(int i=0; i<vec.size(); i++)
        {
            data get = vec[i];

            //cerr << "get.index: " << get.index << " get.ch: " << get.ch << endl;
        }

        /// check[] == 1 means tate avg+1 ta character thakbe...
        int check[27];

        memset(check,0,sizeof(check));

        for(int i=0; i<Max; i++)
            check[i] = 1;

        char ara[26][27];

        int k=0;
        for(int i=0; i<vec.size(); i++)
        {
            data get = vec[i];
            int ind = get.index; /// ind means column no.

            if(check[ind] == 1)
            {
                for(int j=0; j<avg+1; j++)
                    ara[j][ind] = cipher_text[k++];
            }
            else
            {
                for(int j=0; j<avg+1; j++){
                    if(j < avg)
                        ara[j][ind] = cipher_text[k++];
                    else if(j == avg)
                        ara[j][ind] = '0';
                }
            }
        }

//        for(int i=0; i<len1; i++)
//        {
//            for(int j=0; j<len1; j++)
//                printf("%c ",ara[i][j]);
//            printf("\n");
//        }

        for(int i=0; i<len1; i++)
        {
            for(int j=0; j<len1; j++)
            {
                if(ara[i][j] != '0')
                    printf("%c",ara[i][j]+32);
            }
        }
        printf("\n\n");
    }

    return 0;
}

/*

1
MEGABUCK
AFLLSKSOSELAWAITOOSSCTLNMOMANTESILYNTWRNNTSOWPAEDOBUOERIRICX

*/
