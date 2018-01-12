#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x;

    scanf("%d",&n);
    vector <int> vec;
    vector <int> :: iterator it;
    ///input:
    for(i = 0;i < n;i++){
        scanf("%d",&x);
        vec.push_back(x);
    }
    cout << "\n" << "Before delating size :" << vec.size() << endl;
    cout << "output" << endl;
    ///output:
    for(it = vec.begin();it < vec.end();it++){
        cout << *it << endl;

    }
    ///delete:
    vec.pop_back(); /// ekta ekta kore delate
    vec.pop_back(); /// pop_back() use korle last theke delate hoy...
    ///size:
    cout << "\n" << "After Two delating , size :" << vec.size() << "\n" << endl ;
    cout << "output" << endl;
    //cout << "\n\n";

    /// coping
    vector <int> vec1;
    vec1 = vec;
    for(it = vec1.begin();it != vec1.end();it++)
        cout << *it << endl;

    printf("After reversing the delating vector :\n");

    /// reverse:
    reverse(vec1.begin(),vec1.end());
    i = 0;
    while(!vec1.empty()){
        cout << vec1[i] << endl;
        vec1.pop_back();
        i++;
    }

    return 0;
}
/*
5
1
2
3
4
5
*/
