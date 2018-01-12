#include<bits/stdc++.h>

using namespace std;
vector<int>ans;

bool taken[15];
int ar[15],k;

using namespace std;

void backtrack(int index)      ///AC
{
    int i;
    if(ans.size()==6)
    {
            for(i=0; i<6; i++)
            {
                printf("%d",ans[i]);
                if(i<5)
                    printf(" ");
            }
            printf("\n");
            return;
    }
    for(i=index; i<k; i++)
    {
        //printf("check: %d\n",index);
        ans.push_back(ar[i]);
        taken[i]=1;
        backtrack(i+1);
        taken[i]=0;
        ans.pop_back();
    }
}

int main()
{
    //freopen("out.txt","w",stdout);
    int i,j=1;

    while(scanf("%d",&k) && k)
    {
        if(j>1)printf("\n");
        for(i=0; i<k; i++)
            scanf("%d",&ar[i]);
        backtrack(0);
        j++;

    }
    return 0;
}

/*

7 1 2 3 4 5 6 7
8 1 2 3 5 8 13 21 34
0

*/
