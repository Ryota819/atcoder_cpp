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
int N, K, A[1010], B[1010], C[1010], D[1010];
int P[1000010], Q[1000010];

void solve() {}

int main() {
  // 入力
  cin >> N >> K;
  FOR(i, 1, N + 1) cin >> A[i];
  FOR(i, 1, N + 1) cin >> B[i];
  FOR(i, 1, N + 1) cin >> C[i];
  FOR(i, 1, N + 1) cin >> D[i];

  FOR(i, 1, N + 1) FOR(j, 1, N + 1) P[(i - 1) * N + j] = A[i] + B[j];
  FOR(i, 1, N + 1) FOR(j, 1, N + 1) Q[(i - 1) * N + j] = C[i] + D[j];
  sort(Q + 1, Q + (N * N) + 1);

  FOR(i, 1, N * N + 1) {
    int pos1 = lower_bound(Q + 1, Q + (N * N) + 1, K - P[i]) - Q;
    if (pos1 <= N * N && Q[pos1] == K - P[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  solve();
  return 0;
}
