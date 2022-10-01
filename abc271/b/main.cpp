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
int N, Q;
int main() {
  // 入力

  cin >> N >> Q;
  vector<vector<int>> an(N + 1);
  FOR(i, 1, N + 1) {
    int li;
    cin >> li;
    vector<int> l(li + 1);
    FOR(j, 1, li + 1) cin >> l[j];
    an.at(i) = l;
  }
  FOR(i, 1, Q + 1) {
    int s, t;
    cin >> s >> t;
    cout << an[s][t] << endl;
  }

  return 0;
}
