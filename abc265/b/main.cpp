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
ll n, m, t;
vector<int> a(100010);
vector<ll> bonus(100010);

void solve() {
  REP(i, n - 1) {
    t += bonus[i];
    t -= a[i];
    if (t <= 0) {
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" << endl;
}

int main() {
  // 入力
  cin >> n >> m >> t;
  REP(i, n - 1) cin >> a[i];
  REP(i, m) {
    int x, y;
    cin >> x >> y;
    bonus[x - 1] = y;
  }

  solve();
  return 0;
}
