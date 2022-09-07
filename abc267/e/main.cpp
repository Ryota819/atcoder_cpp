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
int n, m;
int a[200010];
vector<vector<int>> to(200010);
void solve() {
  ll ac = 1e16, wa = -1;
  while (ac - wa > 1) {
    ll wj = (ac + wa) / 2;
    auto f = [&](ll x) {
      vector<ll> s(n);
      vector<bool> del(n);
      queue<int> q;
      REP(i, n) {
        for (int j : to[i]) s[i] += a[j];
        if (s[i] <= x) {
          del[i] = true;
          q.push(i);
        }
      }

      int cnt = 0;
      while (!q.empty()) {
        int v = q.front();
        q.pop();
        cnt++;
        for (int u : to[v]) {
          s[u] -= a[v];
          if (!del[u] && s[u] <= x) {
            del[u] = true;
            q.push(u);
          }
        }
      }
      return cnt == n;
    };
    if (f(wj))
      ac = wj;
    else
      wa = wj;
  }
  cout << ac << endl;
}

int main() {
  // 入力
  cin >> n >> m;
  REP(i, n) cin >> a[i];
  REP(i, m) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  solve();
  return 0;
}
