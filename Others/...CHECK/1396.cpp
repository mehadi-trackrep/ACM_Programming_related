#include <bits/stdc++.h>
using namespace std;

#define MEM(x,y) memset(x, y,sizeof x)
#define pk push_back

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> ii;
const double eps = 1e-10;
const int inf = 1 << 30;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;

char s[100010];

int t, icase = 0;

void solve1(){

    int len = strlen(s);
    int mid = len / 2;

    bool flag = false;

    int pos;

    for (int i = mid + 1;i < len;++i){
        if (s[i] == s[len - i - 1]) continue;
        if (s[i] < s[len - i - 1]){
            flag = true;
            pos = i;
            break;
        }
        break;
    }
    if (flag){
        s[pos] = s[len - pos - 1];
        for (int i = pos + 1;i < len;++i)
            s[i] = s[len - i - 1];
        puts(s);
    }else{
        if (s[mid] != '9'){
            s[mid]++;
            for (int i = mid + 1;i < len;++i)
                s[i] = s[len - i - 1];
            puts(s);
        }else{
            for (int i = mid - 1;i >= 0;--i){
                if (s[i] != '9'){
                    s[i]++;
                    for (int j = i + 1;j <= mid;++j)
                        s[j] = '0';
                    break;
                }
            }
            for (int i = mid + 1;i < len;++i)
                s[i] = s[len - i - 1];
            puts(s);
        }
    }
}
void solve2(){
    int len = strlen(s);
    int mid = len / 2;
    int pos;
    bool flag = false;
    for (int i = mid;i < len;++i){
        if (s[i] == s[len - i - 1]) continue;
        if (s[i] < s[len - i - 1]){
            pos = i;
            flag = true;
            break;
        }
        break;
    }
    if (flag){
        s[pos] = s[len - pos - 1];
        for (int i = pos + 1;i < len;++i)
            s[i] = s[len - i - 1];
        puts(s);
    }else{
        if (s[mid - 1] != '9'){
            s[mid - 1]++;
            for (int i = mid;i < len;++i)
                s[i] = s[len - i - 1];
            puts(s);
        }else{
            for (int i = mid - 2;i >= 0;--i){
                if (s[i] != '9'){
                    s[i]++;
                    for (int j = i + 1;j < mid;++j)
                        s[j] = '0';
                    break;
                }
            }
            for (int i = mid;i < len;++i)
                s[i] = s[len - i - 1];
            puts(s);
        }
    }
}
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        bool flag = true;
        int len = strlen(s);
        for (int i = 0;i < len;++i){
            if (s[i] != '9'){
                flag = false;
                break;
            }
        }
        printf("Case %d: ", ++icase);
        if (flag){
            putchar('1');
            for (int i = 0;i < len - 1;++i){
                putchar('0');
            }
            putchar('1');
            puts("");
        }
        else{
            len = strlen(s);
            if (len & 1){
                solve1();
            }else solve2();
        }
    }
    return 0;
}

