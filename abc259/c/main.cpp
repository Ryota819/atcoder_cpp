#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<char, int>;

vector<P> rls(string& s) {
  vector<P> rls;
  for (char c : s) {
    if (rls.size() > 0 && rls.back().first == c) {
      rls.back().second++;
    } else {
      rls.emplace_back(c, 1);
    }
  }
  return rls;
}

int main() {
  string s, t;
  cin >> s >> t;

  string ans = "Yes";

  auto a = rls(s);
  auto b = rls(t);

  if (a.size() != b.size()) {
    cout << "No" << endl;
    return 0;
  }
  rep(i, a.size()) {
    if (a[i].first != b[i].first) {
      ans = "No";
      break;
    }

    if (a[i].second > b[i].second) {
      ans = "No";
      break;
    }

    if (a[i].second < b[i].second && a[i].second == 1) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
