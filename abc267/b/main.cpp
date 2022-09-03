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
  string T = "1111111";
  if (S[0] == '1') {
    Yes(false);
    return;
  }

  if (S[6] == '0') {
    T[0] = '0';
  }
  if (S[3] == '0') {
    T[1] = '0';
  }
  if (S[1] == '0' && S[7] == '0') {
    T[2] = '0';
  }
  if (S[4] == '0') {
    T[3] = '0';
  }
  if (S[2] == '0' && S[8] == '0') {
    T[4] = '0';
  }
  if (S[5] == '0') {
    T[5] = '0';
  }
  if (S[9] == '0') {
    T[6] = '0';
  }
  int rtn = 0;
  int first = T[0];
  int now = T[0];
  FOR(i, 1, 7) {
    if (now != T[i]) {
      now = T[i];
      rtn++;
    }
  }
  if (first == '1') {
    Yes(rtn >= 2);
  } else {
    Yes(rtn >= 3);
  }
}

int main() {
  // 入力
  cin >> S;

  solve();
  return 0;
}
