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
int d, n;
int l[1000010], r[1000010];
int diff[1000010], s[1000010];

void solve() {
  REP(i, n) {
    diff[l[i]] += 1;
    diff[r[i] + 1] -= 1;
  }
  REP(i, d) {
    s[i + 1] = s[i] + diff[i + 1];
    cout << s[i + 1] << endl;
  }
}

int main() {
  // 入力
  cin >> d >> n;
  REP(i, n) cin >> l[i] >> r[i];

  solve();
  return 0;
}
