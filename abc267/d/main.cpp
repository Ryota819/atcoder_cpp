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
const int Max_n = 2010;
const ll MINF = -1000000000000000000ll;
int n, m;
ll an[Max_n];
ll dp[Max_n][Max_n];

void solve() {
  dp[0][0] = 0;
  dp[0][1] = MINF;
  FOR(i, 1, n + 1) FOR(j, 0, n + 1) {
    if (j == 0)
      dp[i][0] = 0;
    else if (j > i)
      dp[i][j] = MINF;
    else
      dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + an[i - 1] * j);
  }
  cout << dp[n][m] << endl;
}

int main() {
  // 入力
  cin >> n >> m;
  REP(i, n) cin >> an[i];
  solve();
  return 0;
}
