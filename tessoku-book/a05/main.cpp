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
int n, k;

void solve() {
  int cnt = 0;
  FOR(i, 1, n + 1) FOR(j, 1, n + 1) {
    int l = k - i - j;
    if (1 <= l && l <= n) cnt += 1;
  }
  cout << cnt << endl;
}

int main() {
  // 入力
  cin >> n >> k;

  solve();
  return 0;
}
