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

bool used[10010];
int perm[10010];

void permutation1(int pos, int n) {
  if (pos == n) {
    REP(i, n) cout << perm[i];
    cout << endl;
    return;
  }

  REP(i, n) {
    if (!used[i]) {
      perm[pos] = i;
      used[i] = true;
      permutation1(pos + 1, n);
      used[i] = false;
    }
  }
}

int perm2[10010];

void permutation2(int n) {
  REP(i, n) perm2[i] = i;

  do {
    REP(i, n) cout << perm2[i];
    cout << endl;
  } while (next_permutation(perm2, perm2 + n));
}
void solve() { permutation2(5); }

int main() {
  // 入力

  solve();
  return 0;
}
