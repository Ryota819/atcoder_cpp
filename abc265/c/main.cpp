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
int h, w;
vector<string> g(510);
int s[510][510];

void solve() {
  queue<pair<int, int>> q;
  q.push(make_pair(0, 0));
  while (!q.empty()) {
    auto now = q.front();
    q.pop();

    s[now.first][now.second] = 1;

    int next_x, next_y;
    if (g[now.first][now.second] == 'U' && now.first != 0) {
      next_x = now.first - 1;
      next_y = now.second;
    } else if (g[now.first][now.second] == 'D' && now.first != h - 1) {
      next_x = now.first + 1;
      next_y = now.second;
    } else if (g[now.first][now.second] == 'L' && now.second != 0) {
      next_x = now.first;
      next_y = now.second - 1;
    } else if (g[now.first][now.second] == 'R' && now.second != w - 1) {
      next_x = now.first;
      next_y = now.second + 1;
    } else {
      cout << now.first + 1 << " " << now.second + 1 << endl;
      return;
    }
    // cout << next_x << " " << next_y << endl;
    if (s[next_x][next_y] == 0) {
      q.push(make_pair(next_x, next_y));
    }
  }
  cout << -1 << endl;
}

int main() {
  // 入力
  cin >> h >> w;
  REP(i, h) cin >> g[i];

  solve();
  return 0;
}
