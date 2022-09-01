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
ll N;

void solve() {
  ll Np = abs(N);
  ll amari = Np % 998244353;
  // cout << amari << endl;

  if (N >= 0) {
    cout << amari << endl;
  } else {
    if (amari == 0) {
      cout << 0 << endl;
    } else {
      cout << 998244353 - amari << endl;
    }
  }
}

int main() {
  // 入力
  cin >> N;
  solve();
  return 0;
}
