#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int wa(int t) {
  int ans = 0;
  while (true) {
    ans += t % 10;
    t = t / 10;
    if (t == 0) {
      break;
    }
  }
  return ans;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int cnt = 0;
  for (int i = 1; i <= (n); ++i) {
    int x = wa(i);
    if (a <= x && x <= b) {
      //   cout << i << endl;
      cnt += i;
    }
  }
  cout << cnt << endl;
  return 0;
}
