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
int N, K;
int A[100010];

bool check(ll x) {
  ll sum = 0;
  FOR(i, 1, N + 1) sum += x / A[i];
  if (sum >= K) return true;
  return false;
}

void solve() {
  ll left = 1, right = 1000000000;
  while (left < right) {
    ll mid = (left + right) / 2;
    bool ans = check(mid);
    if (ans == false) left = mid + 1;
    if (ans == true) right = mid;
  }
  cout << left << endl;
}

int main() {
  // 入力
  cin >> N >> K;
  FOR(i, 1, N + 1) cin >> A[i];

  solve();
  return 0;
}
