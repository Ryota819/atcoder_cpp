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

void solve() {}

int main() {
  // 入力
  vector<bool> a(300010, false);
  cin >> N;
  FOR(i, 1, N + 1) {
    ll b;
    cin >> b;
    if (b > 300010) continue;
    a[b] = true;
  }
  int read = 0, rest = N;

  while (rest > 0) {
    if (a[read + 1] == true) {
      read++;
      rest--;
    } else {
      if (rest >= 2) {
        read++;
        rest -= 2;
      } else {
        break;
      }
    }
  }
  cout << read << endl;
  solve();
  return 0;
}
