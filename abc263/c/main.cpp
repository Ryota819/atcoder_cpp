#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<vector<long long>> comb(long long n, long long r) {
  std::vector<bool> b(n);
  std::fill(b.end() - r, b.end(), true);

  vector<vector<long long>> combs = {};
  do {
    vector<long long> c = {};
    for (long long i = 0; i < n; i++)
      if (b[i]) c.push_back(i + 1);
    combs.push_back(c);
  } while (std::next_permutation(b.begin(), b.end()));
  return combs;
}
int n, m;

int main() {
  cin >> n >> m;

  auto c = comb(m, n);
  reverse(c.begin(), c.end());
  for (auto v : c) {
    for (auto i : v) cout << i << " ";
    cout << endl;
  }
  return 0;
}
