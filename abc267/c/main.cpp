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
ll N, M;
ll A[200010];

void solve() {
    ll wa[200010];
  ll ans = 0;
  REP(j, M) { ans += A[j]; }
  wa[0] = ans;
  REP(i, N - M) { wa[i + 1] = wa[i] + A[i + M] - A[i]; }
  ll ans2 = 0;
  REP(j, M) { ans2 += ((j + 1) * A[j]); }
  ll max = ans2;
  REP(i, N - M) {
    ll tmp = ans2 - wa[i] + A[i + M] * M;
    max = std::max(max, tmp);
    ans2 = tmp;
  }
  cout << max << endl;
}

int main() {
  // 入力

  cin >> N >> M;
  REP(i, N) cin >> A[i];

  solve();
  return 0;
}
