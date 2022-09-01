#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)

using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
  seen[v] = true;
  for (auto next_v : G[v]) {
    if (seen[next_v]) continue;
    dfs(G, next_v);
  }
}

int main() {
  int N, M, s, t;
  cin >> N >> M >> s >> t;

  Graph G(N);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  seen.assign(N, false);
  dfs(G, s);

  if (seen[t])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
