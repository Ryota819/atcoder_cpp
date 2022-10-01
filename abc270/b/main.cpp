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
int x, y, z;

void solve() {
  if (abs(x) < abs(y)) {
    cout << abs(x) << endl;
    return;
  }
  if ((x > 0 && y < 0) || (x < 0 && y > 0)) {
    cout << abs(x) << endl;
    return;
  }
  if (abs(z) > abs(y)) {
    cout << -1 << endl;
    return;
  }
  if ((x > 0 && z > 0) || (x < 0 && z < 0)) {
    cout << abs(x) << endl;
    return;
  } else {
    cout << abs(x) + abs(z) * 2 << endl;
  }
}

int main() {
  // 入力
  cin >> x >> y >> z;

  solve();
  return 0;
}
