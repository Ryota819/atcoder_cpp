#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, y;
  cin >> n >> y;

  for (int i = 0; i <= (n); ++i) {
    for (int j = 0; j <= (n - i); ++j) {
      int z = n - i - j;
      int x = 10000 * i + 5000 * j + 1000 * z;
      if (x == y) {
        cout << i << " " << j << " " << z << endl;
        return 0;
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}
