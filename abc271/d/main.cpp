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
int a[110], b[110];
bool dp[110][10010];
void solve() {
  dp[0][0] = true;
  REP(i, N) {
    REP(j, S + 1) {
      if (dp[i][j]) {
        if (j + a[i] <= S) {
          dp[i + 1][j + a[i]] = true;
        }
        if (j + b[i] <= S) {
          dp[i + 1][j + b[i]] = true;
        }
      }
    }
  }
  if (dp[N][S]) {
    cout << "Yes" << endl;
    string t(N, 'H');
    REPR(i, N - 1) {
      if (S > a[i] and dp[i][S - a[i]]) {
        t[i] = 'H';
        S -= a[i];
      } else {
        t[i] = 'T';
        S -= b[i];
      }
    }
    cout << t << endl;
  } else {
    cout << "No" << endl;
  }
}

int main() {
  // 入力
  cin >> N >> S;
  FOR(i, 0, N) cin >> a[i] >> b[i];

  solve();
  return 0;
}
