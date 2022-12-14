#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
const int INF = 1e9;
const ll LINF = 1e18;

#define dump(x) cout << #x << " = " << (x) << endl;
#define YES(n) cout << ((n) ? "YES" : "NO") << endl;
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; i--)

// 入力変数宣言
int N;

void solve() {
  ld left = 0.0, right = 100.0;

  int q = 100;
  while (q--) {
    ld mid = (left + right) / 2;
    ld now = pow(mid, 3) + mid;
    if (now >= N)
      right = mid;
    else
      left = mid;
  }
  cout << right << endl;
}

int main() {
  // 入力
  cin >> N;

  solve();
  return 0;
}
