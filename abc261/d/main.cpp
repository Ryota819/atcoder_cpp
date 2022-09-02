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
const int N_MAX = 5010;
int N, M;
ll x[N_MAX];
ll c[N_MAX];
ll dp[N_MAX][N_MAX];

void solve() {
  ll max[N_MAX];
  FOR(i, 1, N + 1) {
    FOR(j, 0, i + 1) {
      if (j == 0) {
        dp[i][j] = max[i - 1];
        max[i] = dp[i][j];
      } else {
        dp[i][j] = dp[i - 1][j - 1] + x[i - 1] + c[j];
        max[i] = std::max(max[i], dp[i][j]);
      }
      // cout << "i:" << i << ",j:" << j << ",dp:" << dp[i][j] << endl;
    }
  }
  cout << max[N] << endl;
}

int main() {
  // 入力
  cin >> N >> M;
  REP(i, N) cin >> x[i];
  FOR(i, 0, N + 1) c[i] = 0;
  REP(i, M) {
    int t;
    cin >> t >> c[t];
  }

  // FOR(i, 0, N) FOR(j, 0, N) dp[i][j] = -1;
  // dp[0][0] = 0;

  solve();
  return 0;
}
