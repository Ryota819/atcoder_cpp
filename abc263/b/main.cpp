#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n;
int p[100];

int main() {
  cin >> n;
  for (int i = 2; i <= n; ++i) {
    cin >> p[i];
  }

  int target = n;
  int cnt = 0;
  while (target != 1) {
    target = p[target];
    cnt += 1;
  }

  cout << cnt << endl;

  return 0;
}
