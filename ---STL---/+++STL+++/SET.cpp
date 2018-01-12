#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int i,n,x;

    scanf("%d",&n);
    set <int> st;
    set <int> :: iterator st_it;
    st.clear();
    for(i = 0;i < n;i++){
        scanf("%d",&x);
        st.insert(x);
    }

    cout << endl << st.size() << endl << "\n";  /// total koto ti element ace ,
                                            ///  ta dekhar jonno st.size() ;

    for(st_it = st.begin();st_it != st.end();st_it++)
        cout << *st_it << endl;

    return 0;
}

