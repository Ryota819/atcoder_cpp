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
int n;
int a[110];

void solve() {
  FOR(i, 0, n - 2) FOR(j, i + 1, n - 1) FOR(k, j + 1, n) {
    if (a[i] + a[j] + a[k] == 1000) {
      cout << "Yes" << endl;
      return;
    }
  }
  cout << "No" << endl;
}

int main() {
  // 入力
  cin >> n;
  REP(i, n) cin >> a[i];

  solve();
  return 0;
}
