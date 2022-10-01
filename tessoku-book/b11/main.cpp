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
int a[100010];

int search(int x) {
  return lower_bound(a + 1, a + n + 1, x) - a;
  
}

void solve() {
  REP(i, q) {
    int x;
    cin >> x;
    cout << search(x) - 1 << endl;
  }
}

int main() {
  // 入力
  cin >> n;
  FOR(i, 1, n + 1) cin >> a[i];
  sort(a + 1, a + n + 1);
  cin >> q;

  solve();
  return 0;
}
