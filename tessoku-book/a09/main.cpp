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
int h, w, n;
int a[100010], b[100010], c[100010], d[100010];
int di[1510][1510], s[1510][1510];

void solve() {
  REP(i, n) {
    di[a[i]][b[i]] += 1;
    di[a[i]][d[i] + 1] -= 1;
    di[c[i] + 1][b[i]] -= 1;
    di[c[i] + 1][d[i] + 1] += 1;
  }
  REP(i, h + 1) REP(j, w + 1) {
    s[i + 1][j + 1] = s[i + 1][j] + di[i + 1][j + 1];
  }
  REP(j, w + 1) REP(i, h + 1) { s[i + 1][j + 1] += s[i][j + 1]; }
  FOR(i, 1, h + 1) {
    FOR(j, 1, w + 1) {
      cout << s[i][j];
      if (j != w) cout << " ";
    }
    cout << endl;
  }
}

int main() {
  // 入力
  cin >> h >> w >> n;
  REP(i, n) cin >> a[i] >> b[i] >> c[i] >> d[i];

  solve();
  return 0;
}
