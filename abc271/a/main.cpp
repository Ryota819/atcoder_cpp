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
int N;

void solve() {
  unsigned char buf[1024] = "";
  unsigned char* str_ptr = &buf[sizeof(buf) - 1];

  *--str_ptr = N % 16;
  if (10 > *str_ptr) {
    *str_ptr += 0x30;  // 0x30は0の文字コード
  } else {
    *str_ptr += (0x41 - 0x0A);  // 0x41はAの文字コード
  }
  N /= 16;

  *--str_ptr = N % 16;
  if (10 > *str_ptr) {
    *str_ptr += 0x30;  // 0x30は0の文字コード
  } else {
    *str_ptr += (0x41 - 0x0A);  // 0x41はAの文字コード
  }

  cout << str_ptr << endl;
}

int main() {
  // 入力
  cin >> N;
  if (N == 0) {
    cout << "00" << endl;
    return 0;
  }

  solve();
  return 0;
}
