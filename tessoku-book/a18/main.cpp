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
int N, S;
int A[65];
bool dp[65][10010];

void solve() {
  dp[0][0] = true;
  FOR(i, 1, S + 1) dp[0][i] = false;

  FOR(i, 1, N + 1) {
    FOR(j, 0, S + 1) {
      if (j < A[i]) {
        if (dp[i - 1][j] == true) {
          dp[i][j] = true;
        } else {
          dp[i][j] = false;
        }
      }
      if (j >= A[i]) {
        if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true) {
          dp[i][j] = true;
        } else {
          dp[i][j] = false;
        }
      }
    }
  }
  if (dp[N][S] == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

int main() {
  // 入力
  cin >> N >> S;
  FOR(i, 1, N + 1) cin >> A[i];

  solve();
  return 0;
}
