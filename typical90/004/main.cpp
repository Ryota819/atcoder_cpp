#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int H, W;
int an[2010][2010];
int sum_h[2010], sum_w[2010];

int main() {
  cin >> H >> W;
  rep(i, H) rep(j, W) cin >> an[i][j];
  rep(i, H) rep(j, W) sum_h[i] += an[i][j];
  rep(j, W) rep(i, H) sum_w[j] += an[i][j];

  rep(i, H) {
    rep(j, W) { cout << sum_h[i] + sum_w[j] - an[i][j] << " "; }
    cout << endl;
  }

  return 0;
}
