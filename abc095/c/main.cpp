#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int ans = 1000000000;

  //   rep(i, x + 1) {
  //     rep(j, y + 1) {
  //       int ab = max(x - i, y - j) * 2;
  //       ans = min(ans, a * i + b * j + c * ab);
  //     }
  //   }
  int max_ab = max(x, y);
  rep(i, max_ab + 1) {
    int tmp = (max(x - i, 0)) * a + (max(y - i, 0)) * b + 2 * i * c;
    // cout << tmp << endl;
    ans = min(ans, tmp);
  }
  cout << ans << endl;

  return 0;
}
