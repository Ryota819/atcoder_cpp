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
int N;
ll m[100010][5];
ll dp[100010][5];
int max_t;

void solve() {
  dp[0][0] = 0;
  FOR(i, 1, max_t + 1) REP(j, 5) {
    if (j == 0) {
      // 0にいく場合
      if (dp[i - 1][j] == -1 && dp[i - 1][j + 1] == -1) {
        continue;
      }
      dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j + 1]) + m[i][j];
    } else if (j == 4) {
      // 4にいく場合
      if (dp[i - 1][j] == -1 && dp[i - 1][j - 1] == -1) {
        continue;
      }
      dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - 1]) + m[i][j];
    } else {
      // それ以外にいく場合
      if (dp[i - 1][j] == -1 && dp[i - 1][j - 1] == -1 &&
          dp[i - 1][j + 1] == -1) {
        continue;
      }
      dp[i][j] =
          std::max(std::max(dp[i - 1][j], dp[i - 1][j - 1]), dp[i - 1][j + 1]) +
          m[i][j];
    }
    // cout << "i:" << i << " ,j:" << j << " ,dp:" << dp[i][j] << endl;
  }
  ll max = std::max(
      std::max(std::max(std::max(dp[max_t][0], dp[max_t][1]), dp[max_t][2]),
               dp[max_t][3]),
      dp[max_t][4]);
  if (max == -1) {
    cout << 0 << endl;
  } else {
    cout << max << endl;
  }
}

int main() {
  // 入力
  cin >> N;
  REP(i, N) REP(j, 5) {
    dp[i][j] = -1;
    m[i][j] = 0;
  }
  REP(i, N) {
    int t, x, a;
    cin >> t >> x >> a;
    m[t][x] = a;
    if (i == N - 1) max_t = t;
  }

  REP(i, N) REP(j, 5) { dp[i][j] = -1; }

  solve();
  return 0;
}
