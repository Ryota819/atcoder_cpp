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
int n;
int p[200010];
int rp[200010];
int sum[200010];

void solve() {
  REP(i, n) {
    sum[(i - p[i] + n) % n] += 1;
    sum[(i - p[i] - 1 + n) % n] += 1;
    sum[(i - p[i] + 1 + n) % n] += 1;
  }
  int ans = 0;
  REP(i, n) ans = std::max(ans, sum[i]);
  cout << ans << endl;
}

int main() {
  // 入力
  cin >> n;
  REP(i, n) cin >> p[i];

  solve();
  return 0;
}
