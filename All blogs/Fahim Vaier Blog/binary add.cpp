#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char bin1[100],bin2[100];
    int len1,len2,len,i,sum,c;
    int res[110];

    cin >> bin1 , cin >> bin2;
    //cout << bin1,cout << "=>",cout << bin2;
    len1 = strlen(bin1);
    len2 = strlen(bin2);

    if(len1 > len2)
        len = len1;
    else if(len2 > len1)
        len = len2;

    for(i = 1; i <= len; i++){

        c = 0;
        sum = (bin1[len1-i]-48) + (bin2[len2-i] - 48) + c;


        if(sum == 0){
            res[i-1] = '0';
            c = 0;
        }

        else if(sum == 1){
            res[i-1] = '1';
            c = 0;
        }

        else if(sum == 2){
            res[i-1] = '0';
            c = 1;
        }

        else if(sum == 3){
            res[i-1] = '1';
            c = 1;
        }

    }

    //cout <<

    return 0;
}
