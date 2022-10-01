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

int a[110];

void solve() {}

int main() {
  // 入力
  int n, k;
  cin >> n >> k;
  REP(i, k) cin >> a[i];

  int ans = 0, ao = 0;
  int sum = n;
  bool taka = true;
  REPR(i, k - 1) {
    if (sum == 0) break;
    if (taka) {
      // cout << i << endl;
      if (sum >= a[i]) {
        int s = sum / a[i];
        sum -= a[i] * s;
        if (s % 2 == 0) {
          ans += a[i] * (s / 2);
        } else {
          ans += a[i] * ((s / 2) + 1);
          taka = false;
        }
        ao += a[i] * (s / 2);
      }
    } else {
      if (sum >= a[i]) {
        sum -= a[i];
        ao += a[i];
        i++;
        taka = true;
      }
    }
  }
  cout << ans << endl;

  solve();
  return 0;
}
