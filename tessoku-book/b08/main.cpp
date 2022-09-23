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
int n, q;
int a, b, c, d;
int t[1510][1510], st[1510][1510];

void solve() {
  FOR(i, 1, 1501) FOR(j, 1, 1501) st[i][j] = st[i][j - 1] + t[i][j];
  FOR(j, 1, 1501) FOR(i, 1, 1501) st[i][j] += st[i - 1][j];
  REP(i, q) {
    cin >> a >> b >> c >> d;
    cout << st[c][d] - st[c][b - 1] - st[a - 1][d] + st[a - 1][b - 1] << endl;
  }
}

int main() {
  // 入力
  cin >> n;
  FOR(i, 1, n + 1) {
    int x, y;
    cin >> x >> y;
    t[x][y] += 1;
  }
  cin >> q;

  solve();
  return 0;
}
