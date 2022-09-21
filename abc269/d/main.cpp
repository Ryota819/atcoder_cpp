#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
const int INF = 1e9;
const ll LINF = 1e18;

#define dump(x) cout << #x << " = " << (x) << endl;
#define YES(n) cout << ((n) ? "YES" : "NO") << endl;
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; i--)

// 入力変数宣言

using P = pair<int, int>;

void solve() {}

int main() {
  int n;
  cin >> n;
  vector<P> p(n);
  REP(i, n) cin >> p[i].first >> p[i].second;

  map<P, int> mp;
  REP(i, n) mp[p[i]] = i;
  dsu d(n);
  REP(i, n) {
    auto [x, y] = p[i];
    auto check = [&](P q) {
      if (mp.count(q)) {
        d.merge(i, mp[q]);
      }
    };
    check(P(x + 1, y));
    check(P(x, y + 1));
    check(P(x + 1, y + 1));
  }
  int ans = 0;
  REP(i, n) if (d.leader(i) == i) ans++;
  cout << ans << endl;

  return 0;
}
