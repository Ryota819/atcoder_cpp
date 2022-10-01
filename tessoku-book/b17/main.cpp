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
#define REP1(i, n) for (int i = 1; i <= (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; i--)

// 入力変数宣言
int N;
int h[100010], dp[100010];
vector<int> ans;

void solve() {
  dp[2] = abs(h[2] - h[1]);
  FOR(i, 3, N + 1) {
    dp[i] =
        min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  // cout << dp[N] << endl;
  int place = N;
  while (true) {
    ans.push_back(place);
    if (place == 1) break;

    if (dp[place - 1] + abs(h[place] - h[place - 1]) == dp[place]) {
      place = place - 1;
    } else {
      place = place - 2;
    }
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  REP(i, ans.size()) {
    if (i >= 1) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}

int main() {
  // 入力
  cin >> N;
  REP1(i, N) cin >> h[i];

  solve();
  return 0;
}
