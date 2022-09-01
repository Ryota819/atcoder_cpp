#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int N;
string S;

int main() {
  cin >> N >> S;
  string ans = "Yes";
  rep(i, N) {
    // cout << S[i] << S[N - i - 1] << endl;
    if (S[i] != S[N - i - 1]) {
      if (S[i] == 'B' && i != N - 1) {
        S[i] = 'A';
        S[i + 1] = 'B';
      } else {
        if (i > 0) {
          S[i - 1] = 'A';
          S[i] = 'B';
        }
      }
      //   cout << S << endl;
    }
  }
  rep(i, N / 2) {
    // cout << S[i] << S[N - i - 1] << endl;
    if (S[i] != S[N - i - 1]) {
      ans = "No";
      //   cout << S[i] << S[N - i - 1] << endl;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
