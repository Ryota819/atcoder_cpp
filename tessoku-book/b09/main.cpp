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
int a[100010], b[100010], c[100010], d[100010];

int di[1510][1510], s[1510][1510];

void solve() {
  REP(i, n) {
    di[a[i]][b[i]] += 1;
    di[a[i]][d[i]] -= 1;
    di[c[i]][b[i]] -= 1;
    di[c[i]][d[i]] += 1;
  }

  FOR(i, 0, 1501) FOR(j, 0, 1501) {
    if (j == 0) {
      s[i][j] = di[i][j];
    } else {
      s[i][j] = s[i][j - 1] + di[i][j];
    }
  }
  FOR(j, 0, 1501) FOR(i, 0, 1501) { s[i + 1][j] += s[i][j]; }
  int cnt = 0;
  FOR(j, 0, 1501) FOR(i, 0, 1501) if (s[i][j] > 0) cnt += 1;
  cout << cnt << endl;
}

int main() {
  // 入力
  cin >> n;
  REP(i, n) cin >> a[i] >> b[i] >> c[i] >> d[i];
  solve();
  return 0;
}
