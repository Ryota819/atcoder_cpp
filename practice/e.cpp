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

typedef pair<int, int> P;
// 入力変数宣言
const int MAX_N = 110, MAX_M = 110;
char maze[MAX_N][MAX_M];
int N, M;
int sx, sy;
int gx, gy;

int d[MAX_N][MAX_M];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
  queue<P> que;
  rep(i, N) rep(j, M) d[i][j] = INF;
  que.push(P(sx, sy));
  d[sx][sy] = 0;

  while (que.size()) {
    P p = que.front;
    que.pop();

    if (p.first == gx && p.second == gy) break;
    rep(i, 4) {
      int nx = p.first + dx[i], ny = p.second + dy[i];
      if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' &&
          d[nx][ny] == INF) {
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[gx][gy];
}

void solve() {
  int res = bfs();
  cout << res << endl;
}

int main() {
  // 入力

  solve();
  return 0;
}
