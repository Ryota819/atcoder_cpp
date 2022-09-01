#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

ll mod = 1000000007;
ll N, B, K;
ll cn[11];

ll dp[10009][33];

int main() {
  cin >> N >> B >> K;
  rep(i, K) cin >> cn[i];

  dp[0][0] = 1;

  rep(i, N) {
    rep(j, B) {
      rep(k, K) {
        int nex = (10 * j + cn[k]) % B;
        dp[i + 1][nex] += dp[i][j];
        dp[i + 1][nex] %= mod;
      }
    }
  }
  cout << dp[N][0] << endl;

  return 0;
}
