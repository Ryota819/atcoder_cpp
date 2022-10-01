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
int n, x;
int a[100010];

int search(int x) {
  int l = 1, r = n;
  while (l <= r) {
    int m = (l + r) / 2;
    if (x < a[m]) r = m - 1;
    if (x == a[m]) return m;
    if (x > a[m]) l = m + 1;
  }
  return -1;
}

int search_lower_bound(int x) {
  int pos = lower_bound(a + 1, a + n + 1, x) - a;
  if (pos <= n && a[pos] == x) return pos;
  return -1;
}

void solve() {
  int ans = search_lower_bound(x);
  cout << ans << endl;
}

int main() {
  // 入力
  cin >> n >> x;
  FOR(i, 1, n + 1) cin >> a[i];

  solve();
  return 0;
}
