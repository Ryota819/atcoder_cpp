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
string S;

void solve() {
  if (S == "Monday") {
    cout << 5 << endl;
  }
  if (S == "Tuesday") {
    cout << 4 << endl;
  }
  if (S == "Wednesday") {
    cout << 3 << endl;
  }
  if (S == "Thursday") {
    cout << 2 << endl;
  }
  if (S == "Friday") {
    cout << 1 << endl;
  }
}

int main() {
  // 入力
  cin >> S;

  solve();
  return 0;
}
