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
string S, T;
int N, M, dp[2010][2010];

void solve() {
  dp[0][0] = 0;
  REP(i, N + 1) REP(j, M + 1) {
    if (i >= 1 && j >= 1 && S[i - 1] == T[i - 1]) {
      dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1});
    } else if (i >= 1 && j >= 1) {
      dp[i][j] = max(dp[i - 1][j], dp[i - 1][j]);
    } else if (i >= 1) {
      dp[i][j] = dp[i - 1][j];
    } else if (j >= 1) {
      dp[i][j] = dp[i][j - 1];
    }
  }
  cout << dp[N][M] << endl;
}

int main() {
  // 入力
  cin >> S >> T;
  N = S.size();
  M = T.size();

  solve();
  return 0;
}
