#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int xby2(int x) {
  int ans = 0;
  while (true) {
    if (x % 2 == 0) {
      x /= 2;
      ans++;
    } else {
      break;
    }
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> an(n);
  rep(i, n) cin >> an[i];

  int ans = INT_MAX;
  rep(i, n) ans = min(ans, xby2(an[i]));
  cout << ans << endl;

  return 0;
}
