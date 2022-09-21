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
  bitset<60> bs(N);
  vector<int> flag{};
  vector<bitset<60>> ans{};
  ans.push_back(bs);
  if (N == 0) {
    cout << N << endl;
    return;
  }
  REP(i, 60) {
    if (bs[i]) {
      flag.push_back(i);
    }
  }
  for (int bits = 1; bits < (1 << (int)flag.size()); bits++) {
    bitset<60> bss(N);

    for (int i = 0; i < (int)flag.size(); i++) {
      int mask = 1 << i;
      if (bits & mask) {
        bss.set(flag[i], false);
      }
    }
    ans.push_back(bss);
  }

  for (int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i].to_ullong() << endl;
  }
}

int main() {
  // 入力
  cin >> N;

  solve();
  return 0;
}
