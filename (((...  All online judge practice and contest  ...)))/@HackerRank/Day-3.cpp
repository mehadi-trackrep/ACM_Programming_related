#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
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

