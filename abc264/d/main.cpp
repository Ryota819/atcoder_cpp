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
string const T = "atcoder";
string S;

void solve() {
  int counter = 0;
  REPR(i, 6) {
    auto pos = S.find(T[i]);
    counter += i - pos;
    S.erase(pos, 1);
  }
  cout << counter << endl;
}

int main() {
  // 入力
  cin >> S;

  solve();
  return 0;
}
