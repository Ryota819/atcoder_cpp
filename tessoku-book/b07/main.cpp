#include <bits/stdc++.h>

using namespace std;
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
int t, n;
int l[500010], r[500010];
int d[500010], s[500010];

void solve() {
  REP(i, n) {
    d[l[i]] += 1;
    d[r[i]] -= 1;
  }
  REP(i, t) s[i + 1] = s[i] + d[i];
  REP(i, t) cout << s[i + 1] << endl;
}

int main() {
  // 入力
  cin >> t >> n;
  REP(i, n) cin >> l[i] >> r[i];

  solve();
  return 0;
}
