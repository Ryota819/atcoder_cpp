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
int N, K;
int A[100010], R[100010];

void solve() {
  FOR(i, 1, N) {
    if (i == 1)
      R[i] = 1;
    else
      R[i] = R[i - 1];

    while (R[i] < N && A[R[i] + 1] - A[i] <= K) {
      R[i] += 1;
    }
  }
  ll ans = 0;
  FOR(i, 1, N) ans += R[i] - i;
  cout << ans << endl;
}

int main() {
  // 入力
  cin >> N >> K;
  FOR(i, 1, N + 1) cin >> A[i];

  solve();
  return 0;
}
