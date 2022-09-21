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
int n, q;
int a[1000010], l[1000010], r[1000010];
int wa[1000010];

void solve() {
  FOR(i, 0, n) wa[i + 1] = wa[i] + a[i];
  REP(i, q) cout << wa[r[i]] - wa[l[i] - 1] << endl;
}

int main() {
  // 入力
  cin >> n >> q;
  REP(i, n) cin >> a[i];
  REP(i, q) cin >> l[i] >> r[i];

  solve();
  return 0;
}
