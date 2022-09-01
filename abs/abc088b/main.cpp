#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> an(n);
  rep(i, n) cin >> an[i];
  sort(an.begin(), an.end(), greater<int>());
  int diff = 0;
  rep(i, n) if (i % 2 == 0) { diff += an[i]; }
  else {
    diff -= an[i];
  }

  cout << diff << endl;
  return 0;
}
