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
using Graph = vector<vector<int>>;  // グラフ型

// 入力変数宣言
Graph G(200010);  // グラフ
int n, x, y;
int order[200010];
bool seen[200010];

void solve() {}

void dfs(const Graph& G, int v, int pre_v) {
  seen[v] = true;
  order[v] = pre_v;
  // if (v == y) return;
  for (auto next_v : G[v]) {
    if (seen[next_v]) continue;
    dfs(G, next_v, v);
  }
}

int main() {
  // 入力
  cin >> n >> x >> y;
  REP(i, n) {
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  dfs(G, x, 0);
  deque<int> ans;
  int check = y;
  ans.push_front(check);
  while (1) {
    check = order[check];
    ans.push_front(check);
    if (check == x) break;
  }
  std::copy(ans.begin(), ans.end() - 1,
            std::ostream_iterator<int>(std::cout, " "));
  cout << ans.back();
  cout << endl;
  // solve();
  return 0;
}
