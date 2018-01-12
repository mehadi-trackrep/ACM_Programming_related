#include <bits/stdc++.h>
using namespace std;

int main()
{
    string salary;
    cin >> salary;

    int len = salary.length();
    int first,last,k1,k2,ck = 0;

    for(int i=0; i<len/2; i++){

        if(salary[i] != salary[len-i-1]){
            ck = 1;
            break;
        }
    }
    if(ck == 0)
        cout << salary << endl;
    else{

        for(int i=0; i<len/2; i++){

            if(i == len/2-1){
                if(salary[i] == salary[len-i-1]){
                    if(len%2 == 0){
                        if(salary[i] == '9'){
                            salary[i] = '0';
                            salary[len-i-1] = salary[i];
                            salary[i-1] += 1;
                            salary[len-i] = salary[i-1];
                        }
                        else
                        {
                            salary[i] += 1;
                            salary[len-i-1] = salary[i];
                        }
                    }
                    else
                    {
                        salary[len/2] += 1;
                    }
                }
                else{
                    if(salary[i] < salary[len-i-1]){
                        salary[i] += 1;
                        salary[len-i-1] = salary[i];
                    }
                    else if(salary[i] > salary[len-i-1]){
                        salary[len-i-1] = salary[i];
                    }
                }
            }
            else if(salary[i] != salary[len-i-1]){
                first = i;
                last = len-i-1;
                salary[last] = salary[first];
            }
        }

        cout << salary << endl;
    }

    return 0;
}

/*

12341321

1234559

*/
