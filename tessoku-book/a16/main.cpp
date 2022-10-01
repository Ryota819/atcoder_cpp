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
int A[100010], B[100010];
int dp[100010];

void solve() {
  dp[1] = 0;
  dp[2] = A[2];
  FOR(i, 3, N + 1) dp[i] = min(dp[i - 2] + B[i], dp[i - 1] + A[i]);
  cout << dp[N] << endl;
}

int main() {
  // 入力
  cin >> N;
  FOR(i, 2, N + 1) cin >> A[i];
  FOR(i, 3, N + 1) cin >> B[i];

  solve();
  return 0;
}
