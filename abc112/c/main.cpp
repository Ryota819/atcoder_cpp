#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

ll n, x[102], y[102], h[102];
vector<tuple<ll, ll, ll>> vec;

int main() {
  cin >> n;
  int base_case = -1;
  rep(i, n) {
    cin >> x[i] >> y[i] >> h[i];
    if (h[i] > 0) {
      base_case = i;
    }
  }
  rep(i, 102) {
    rep(j, 102) {
      int tmp_h = h[base_case] + abs(x[base_case] - i) + abs(y[base_case] - j);

      bool ok = true;
      rep(k, n) {
        if (h[k] != 0) {
          int this_h = h[k] + abs(x[k] - i) + abs(y[k] - j);
          if (tmp_h != this_h) {
            ok = false;
            break;
          }
        } else {
          if (tmp_h - abs(x[k] - i) - abs(y[k] - j) > 0) {
            ok = false;
            break;
          }
        }
      }
      if (ok) {
        cout << i << " " << j << " " << tmp_h << endl;
        return 0;
      }
    }
  }

  return 0;
}
