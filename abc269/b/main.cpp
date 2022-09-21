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
string s[10];

void solve() {
  int top, bottom, left, right;
  // topを探す。
  REP(i, 10) {
    if (s[i].find("#") != std::string::npos) {
      top = i;
      break;
    }
  }
  // bottomを探す。
  REPR(i, 9) {
    if (s[i].find("#") != std::string::npos) {
      bottom = i;
      break;
    }
  }
  REP(i, 10) {
    if (s[top][i] == '#') {
      left = i;
    }
  }
  REPR(i, 9) {
    if (s[top][i] == '#') {
      right = i;
    }
  }
  cout << top + 1 << " " << bottom + 1 << endl;
  cout << right + 1 << " " << left + 1 << endl;
}

int main() {
  // 入力
  REP(i, 10) cin >> s[i];

  solve();
  return 0;
}
