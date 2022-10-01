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
int a, b;

void solve() {
  int o = 0, p = 0, q = 0;
  if (a == 1) o += 1;
  if (a == 2) p += 1;
  if (a == 3) {
    o += 1;
    p += 1;
  }
  if (a == 4) q += 1;
  if (a == 5) {
    o += 1;
    q += 1;
  }
  if (a == 6) {
    p += 1;
    q += 1;
  }
  if (a == 7) {
    o += 1;
    p += 1;
    q += 1;
  }
  if (b == 1) o += 1;
  if (b == 2) p += 1;
  if (b == 3) {
    o += 1;
    p += 1;
  }
  if (b == 4) q += 1;
  if (b == 5) {
    o += 1;
    q += 1;
  }
  if (b == 6) {
    p += 1;
    q += 1;
  }
  if (b == 7) {
    o += 1;
    p += 1;
    q += 1;
  }
  int ans = 0;
  if (o > 0) ans += 1;
  if (p > 0) ans += 2;
  if (q > 0) ans += 4;
  cout << ans << endl;
}

int main() {
  // 入力
  cin >> a >> b;

  solve();
  return 0;
}
