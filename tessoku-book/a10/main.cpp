#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 1e9;
const ll LINF = 1e18;

#define dump(x) cout << #x << " = " << (x) << endl;
#define YES(n) cout << ((n) ? "YES" : "NO") << endl;
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORR(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; i--)

// 入力変数宣言
int n, d;
int a[100010], l[100010], r[100010];

int p[100010], q[100010];

void solve() {
  p[1] = a[1];
  FOR(i, 2, n + 1) p[i] = max(p[i - 1], a[i]);
  q[n] = a[n];
  FORR(i, n - 1, 1) q[i] = max(q[i + 1], a[i]);

  FOR(i, 1, d + 1) cout << max(p[l[i] - 1], q[r[i] + 1]) << endl;
}

int main() {
  // 入力
  cin >> n;
  FOR(i, 1, n + 1) cin >> a[i];
  cin >> d;
  FOR(i, 1, d + 1) cin >> l[i] >> r[i];

  solve();
  return 0;
}
