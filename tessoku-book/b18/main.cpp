#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 1e9;
const ll LINF = 1e18;

#define dump(x) cout << #x << " = " << (x) << endl;
#define YES(n) cout << ((n) ? "YES" : "NO") << endl;
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPR(i, n) for (int i = n; i > 0; i--)

// 入力変数宣言
int N, S;
int A[69];
int dp[69][10009];
vector<int> ans;
vector<int> Answer;

void solve() {
  dp[0][0] = true;
  FOR(i, 1, S + 1) dp[0][i] = false;

  FOR(i, 1, N + 1) FOR(j, 0, S + 1) {
    if (j < A[i]) {
      if (dp[i - 1][j] == true) {
        dp[i][j] = true;
      } else {
        dp[i][j] = false;
      }
    }
    if (j >= A[i]) {
      if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true) {
        dp[i][j] = true;
      } else {
        dp[i][j] = false;
      }
    }
  }
  if (dp[N][S] == true) {
    int now = S;
    REPR(i, N) {
      if (dp[i - 1][now] != true) {
        now -= A[i];
        ans.push_back(i);
      }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    REP(i, ans.size()) {
      if (i > 0) cout << " ";
      cout << ans[i];
    }
    cout << endl;

  } else {
    cout << "-1" << endl;
  }
  // // 選び方が存在しない場合
  // if (dp[N][S] == false) {
  //   cout << "-1" << endl;
  //   return;
  // }

  // // 答えの復元（Place は "現在の総和"）
  // int Place = S;
  // for (int i = N; i >= 1; i--) {
  //   if (dp[i - 1][Place] == true) {
  //     Place = Place - 0;  // カード i を選ばない
  //   } else {
  //     Place = Place - A[i];  // カード i を選ぶ
  //     Answer.push_back(i);
  //   }
  // }
  // reverse(Answer.begin(), Answer.end());

  // // 出力
  // cout << Answer.size() << endl;
  // for (int i = 0; i < Answer.size(); i++) {
  //   if (i >= 1) cout << " ";
  //   cout << Answer[i];
  // }
  // cout << endl;
}

int main() {
  // 入力
  cin >> N >> S;
  FOR(i, 1, N + 1) cin >> A[i];

  solve();
  return 0;
}
