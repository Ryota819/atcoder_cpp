#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

// 入力変数定義
int const MAX_N = 101;
int const MAX_M = 101;
int N, M;
char field[MAX_N][MAX_M];

void dfs(int x, int y) {
  field[x][y] = '.';

  for (int dx = -1; dx <= 1; ++dx) {
    for (int dy = -1; dy <= 1; ++dy) {
      int nx = x + dx, ny = y + dy;

      if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') {
        dfs(nx, ny);
      }
    }
  }
}

void solve() {
  int res = 0;
  rep(i, N) rep(j, M) {
    if (field[i][j] == 'W') {
      dfs(i, j);
      res++;
    }
  }
  cout << res << endl;
}

int main() {
  // 入力
  cin >> N >> M;
  rep(i, N) rep(j, M) cin >> field[i][j];

  solve();
  return 0;
}