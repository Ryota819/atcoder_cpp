#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  rep(i, 3) if (s.at(i) == '1') cnt++;
  cout << cnt << endl;
  return 0;
}
