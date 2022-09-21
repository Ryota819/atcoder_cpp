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
int n, a[1000010];
int q, l[1000010], r[1000010];
int s[1000010];

void solve() {
  s[0] = 0;
  FOR(i, 1, n + 1) s[i] = s[i - 1] + a[i];
  REP(i, q) {
    int diff = s[r[i]] - s[l[i] - 1];
    int cnt = r[i] - l[i] + 1;
    if (diff * 2 > cnt) cout << "win" << endl;
    if (diff * 2 == cnt) cout << "draw" << endl;
    if (diff * 2 < cnt) cout << "lose" << endl;
  }
}

int main() {
  // 入力
  cin >> n;
  FOR(i, 1, n + 1) cin >> a[i];
  cin >> q;
  REP(i, q) cin >> l[i] >> r[i];

  solve();
  return 0;
}
