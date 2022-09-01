#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

ll N;

bool hantei(string S) {
  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    if (S[i] == '(') cnt += 1;
    if (S[i] == ')') cnt -= 1;
    if (cnt < 0) return false;
  }
  if (cnt == 0) return true;
  return false;
}

int main() {
  cin >> N;
  for (ll i = 0; i < (1 << N); ++i) {
    // cout << static_cast<std::bitset<20>>(i) << endl;
    string S = "";
    for (int j = N - 1; j >= 0; --j) {
      // cout << j << endl;
      if ((i & (1 << j)) == 0) {
        S += "(";
      } else {
        S += ")";
      }
    }

    if (hantei(S)) cout << S << endl;
  }

  return 0;
}
