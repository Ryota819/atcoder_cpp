#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

// 入力
ll N, L;
ll K;
ll an[1 << 18];

const ll INF = 1 << 29;

bool solve(ll M) {
  ll cnt = 0, pre = 0;
  for (int i = 1; i <= N; i++) {
    if (an[i] - pre >= M && L - an[i] >= M) {
      cnt += 1;
      pre = an[i];
    }
  }
  if (cnt >= K) return true;
  return false;
}

int main() {
  cin >> N >> L;
  cin >> K;
  for (int i = 1; i <= N; i++) cin >> an[i];

  ll left = -1;
  ll right = L + 1;
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    if (solve(mid) == false) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << left << endl;

  return 0;
}
