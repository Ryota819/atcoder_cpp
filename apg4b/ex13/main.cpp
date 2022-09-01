#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> an(n);
  rep(i, n) cin >> an[i];

  int sum = 0;
  int ave;
  rep(i, n) sum += an[i];
  ave = sum / n;
  rep(i, n) cout << abs(ave - an[i]) << endl;

  return 0;
}
