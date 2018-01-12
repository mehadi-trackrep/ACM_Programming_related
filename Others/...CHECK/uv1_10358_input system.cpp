#include <bits/stdc++.h>
using namespace std;

struct data1
{
    int id,pid,p;
    char v;

    bool operator < (const data1 &p)const
    {
        return id < p.id;
    }
};

struct data2
{
    int id,tn,p;

    bool operator < (const data2 &p)const
    {

        return id < p.id;
    }
};

vector <data1> vec;

int main()
{
    int tcas;

    scanf("%d\n",&tcas);

    char str[100];

    while(tcas--){

        set <int> st;
        st.clear();
        vec.clear();

        while(1)
        {
            int id,pid,p;
            char v;
            gets(str);
            int len = strlen(str);
            if(str[0] == '\0') break;
            sscanf(str,"%d%d%d",&id,&pid,&p);
            v = str[len-1];
            //printf("-->%d %d %d %c\n",id,pid,p,v);
            data1 get;

            get.id = id;
            get.pid = pid;
            get.p = p;
            get.v = v;

            vec.push_back(get);

            st.insert(id);

        }
        sort(vec.begin(),vec.end());
        set <int> :: iterator it;
        it = st.begin();

        for(int i=0; i<vec.size(); i++)
        {
            while(vec[i].id == *it){
                printf("%d %d %d %c\n",vec[i].id,vec[i].pid,vec[i].p,vec[i].v);
                i++;
            }
            i--;
            it++;
        }

    }

    return 0;
}

/*


1
1 2 10 I
3 1 11 C
1 2 19 R
1 2 21 C
1 1 25 C

2

1 2 10 I
3 1 11 C
1 2 19 R
1 2 21 C
1 1 25 C

1 2 10 I
3 1 11 C
1 2 19 R
1 2 21 C
1 1 25 C


*/
