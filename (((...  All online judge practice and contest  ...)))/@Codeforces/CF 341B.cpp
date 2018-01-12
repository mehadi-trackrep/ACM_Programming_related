#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define INF 1e9
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define FORC(cont, it) for(decltype((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define pb push_back

#define MAXN 100000

//x1 + y1 == x2 + y2
//x1 - y1 == x2 - y2
int main() {
  int n;
  map<ll, ll> m1, m2;

  cin >> n;
  FOR(i, 0, n) {
    int x, y;
    scanf("%d %d", &x, &y);
    m1[x+y]++;
    m2[x-y]++;
  }
  ll ans = 0;

  for (auto it : m1) {
    ans += it.second * (it.second - 1) / 2;
  }
  for (auto it : m2) {
    ans += it.second * (it.second - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}
