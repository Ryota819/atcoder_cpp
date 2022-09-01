#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> dn(n);
  rep(i, n) cin >> dn[i];

  unordered_set<int> set;
  rep(i, n) set.insert(dn[i]);

  cout << set.size() << endl;

  return 0;
}
