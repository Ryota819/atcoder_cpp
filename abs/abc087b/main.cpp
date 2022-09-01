#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int cnt = 0;
  rep(i, a + 1) rep(j, b + 1)
      rep(k, c + 1) if (x == (500 * i + 100 * j + 50 * k)) {
    cnt += 1;
  }

  cout << cnt << endl;

  return 0;
}
