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
ll N, W;
ll w[110], v[110];
ll dp[110][100010];

void solve() {
  FOR(i, 0, N + 1) FOR(j, 0, 100001) dp[i][j] = LINF;
  dp[0][0] = 0;
  FOR(i, 1, N + 1) FOR(j, 0, 100001) {
    if (j - v[i] >= 0) {
      dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
    } else {
      dp[i][j] = dp[i - 1][j];
    }
  }
  ll ans = 0;
  FOR(i, 0, 100001) {
    if (dp[N][i] <= W) ans = i;
  }
  cout << ans << endl;
}

int main() {
  // 入力
  cin >> N >> W;
  FOR(i, 1, N + 1) cin >> w[i] >> v[i];

  solve();
  return 0;
}
