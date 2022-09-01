#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

// 入力変数定義
int const MAX_N = 20;
int a[MAX_N];
int n, k;

bool dfs(int i, int sum) {
  if (i == n) return sum == k;
  if (dfs(i + 1, sum)) return true;
  if (dfs(i + 1, sum + a[i])) return true;

  return false;
}

void solve() {
  if (dfs(0, 0))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int main() {
  // 入力
  cin >> n >> k;
  rep(i, n) cin >> a[i];

  solve();
  return 0;
}