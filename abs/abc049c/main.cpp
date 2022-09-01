#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  long x = 0;
  vector<string> t = {"maerd", "remaerd", "esare", "resare"};
  while (s.size() != x) {
    string substr_5 = s.substr(x, 5);
    string substr_6 = s.substr(x, 6);
    string substr_7 = s.substr(x, 7);
    if (substr_5 == t.at(0) || substr_5 == t.at(2)) {
      x += 5;
    } else if (substr_6 == t.at(3)) {
      x += 6;
    } else if (substr_7 == t.at(1)) {
      x += 7;

    } else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

  return 0;
}
