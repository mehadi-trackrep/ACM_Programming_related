#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int N;
    cin >> N;
    if(N % 2 != 0)
        printf("Weird\n");
    else if(N % 2 == 0 && N >= 2 && N <= 5)
        printf("Not Weird\n");
    else if(N % 2 == 0 && N >= 6 && N <= 20)
        printf("Weird\n");
    else //if(N % 2 == 0 && N > 20)
        printf("Not Weird\n");

    return 0;
}
