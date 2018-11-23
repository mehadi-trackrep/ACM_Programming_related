#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    int tc,n,l;
    int st,en;
    string title,author,journal,volume,number,pages,year,publisher;

    vector <string> tokens;
    string intermediate;

    cin >> tc;

    while(tc--){
        cin >> n;
        while(n--){
            for(int i=1; i<=10; i++){
                getline(cin,s);

                l = s.size();

                if(s != "}"){
                    if(s[0] == 't') title = s.substr(7, l-9);
                    else if(s[0] == 'a'){
                        author = s.substr(8, l-10);
                        stringstream get_token(author);
                        string int_author = "";
                        int cnt=0;

                        while(getline(get_token, intermediate, ' '))
                        {
                            if(cnt%2 == 0){
                                int_author = int_author + intermediate[0] + intermediate[1] + ". ";
                            }else{
                                int_author = int_author + intermediate[0] + ", ";
                            }
                            cnt++;
                        }
                        author = int_author.substr(0, int_author.size()-2);
                        author = author + ". ";
                    }
                    else if(s[0] == 'j')journal = s.substr(9, l-11);
                    else if(s[0] == 'v') volume = s.substr(8, l-10);
                    else if(s[0] == 'n') number = s.substr(8, l-10);
                    else if(s[0] == 'y') year = s.substr(6, l-8);
                    else if(s[0] == 'p'){
                        if(s[1] == 'a') pages = s.substr(7, l-9);
                        else publisher = s.substr(11, l-13);
                    }
                }
            }
            string ans = "";
            ans = ans + author + title + ". " + journal + ". " + year + ';' + volume + '(' + number + ')' + ':' + pages + '.';
            cout << ans << endl;
        }
    }

    return 0;
}
