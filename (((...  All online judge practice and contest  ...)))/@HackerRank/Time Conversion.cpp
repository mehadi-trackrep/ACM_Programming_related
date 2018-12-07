#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s;

    cin >> s;

    int h,m,ss;
    int l = s.size();
    int ck=0,c=1, val=0;

    for(int i=0; i<l; i++){
        if(s[i] == 'P'){
            ss = val;
            ck=1;
            break;
        }else if (s[i] == 'A'){
            ss = val;
            break;
        }

        if(s[i] == ':'){
            if(c == 1) h = val;
            else if(c == 2) m = val;
            c++;
            val = 0;
        }else{
            val = val*10 + (s[i]-'0');
        }
    }
    char ans[12];
    int a,b,ind=0;
    if(ck){
        if(h != 12) h += 12;
        b = h%10;
        h /= 10;
        a = h%10;
        ans[ind++] = a+'0';
        ans[ind++] = b+'0';
        ans[ind++] = ':';
        b = m%10;
        m /= 10;
        a = m%10;
        ans[ind++] = a+'0';
        ans[ind++] = b+'0';
        ans[ind++] = ':';
        b = ss%10;
        ss /= 10;
        a = ss%10;
        ans[ind++] = a+'0';
        ans[ind++] = b+'0';
    }else{
        if(h == 12) h = 0;
        b = h%10;
        h /= 10;
        a = h%10;
        ans[ind++] = a+'0';
        ans[ind++] = b+'0';
        ans[ind++] = ':';
        b = m%10;
        m /= 10;
        a = m%10;
        ans[ind++] = a+'0';
        ans[ind++] = b+'0';
        ans[ind++] = ':';
        b = ss%10;
        ss /= 10;
        a = ss%10;
        ans[ind++] = a+'0';
        ans[ind++] = b+'0';
    }
    ans[ind] = '\0';
    printf("%s\n",ans);

    return 0;
}

