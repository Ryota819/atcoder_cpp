#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;
const ll LINF = 1e18;

#define dump(x) cout << #x << " = " << (x) << endl;
#define YES(n) cout << ((n) ? "YES" : "NO") << endl;
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 1; i <= (n); ++i)
#define REPR(i, n) for (int i = n; i >= 0; i--)

// 入力変数宣言
int const MAX_H = 15;
int const MAX_W = 15;
int H1, W1, H2, W2;
int a[MAX_H][MAX_W], b[MAX_H][MAX_W];

vector<vector<long long>> comb(long long n, long long r) {
  std::vector<bool> b(n);
  std::fill(b.end() - r, b.end(), true);

  vector<vector<long long>> combs = {};
  do {
    vector<long long> c = {};
    for (long long i = 0; i < n; i++)
      if (b[i]) c.push_back(i + 1);
    combs.push_back(c);
  } while (std::next_permutation(b.begin(), b.end()));
  return combs;
}

void solve() {
  auto hc = comb(H1, H2);
  reverse(hc.begin(), hc.end());
  auto wc = comb(W1, W2);
  reverse(wc.begin(), wc.end());
  for (auto h : hc) {
    for (auto w : wc) {
      int h_count = 1;
      bool flag = true;
      for (auto i : h) {
        int w_count = 1;
        for (auto j : w) {
          if (a[i][j] != b[h_count][w_count]) {
            flag = false;
            break;
          }
          if (h_count == H2 && w_count == W2) {
            cout << "Yes" << endl;
            return;
          }
          ++w_count;
        }
        if (!flag) break;
        ++h_count;
      }
    }
  }
  cout << "No" << endl;
  return;
}

int main() {
  // 入力
  cin >> H1 >> W1;
  REP(i, H1) REP(j, W1) cin >> a[i][j];
  cin >> H2 >> W2;
  REP(i, H2) REP(j, W2) cin >> b[i][j];

  solve();
  return 0;
}
