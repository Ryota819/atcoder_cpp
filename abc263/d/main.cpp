#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
ll n, l, r;
ll a[200010];

int main() {
  cin >> n >> l >> r;
  for (ll i = 1; i <= n; ++i) cin >> a[i];
  ll ruiseki_l[200010];
  ruiseki_l[1] = a[1];
  for (ll i = 2; i <= n; i++) {
    ruiseki_l[i] = ruiseki_l[i - 1] + a[i];
  }
  ll ans = ruiseki_l[n];
  int ans_l = 0;

  for (ll i = 0; i <= n; i++) {
    ll change;
    change = l * i + ruiseki_l[n] - ruiseki_l[i];
    if (ans > change) {
      ans = change;
      ans_l = i;
    }
  }
  if (ans_l >= 1) {
    for (ll i = 1; i <= ans_l; i++) {
      a[i] = l;
    }
  }

  ruiseki_l[1] = a[1];
  for (ll i = 2; i <= n; i++) {
    ruiseki_l[i] = ruiseki_l[i - 1] + a[i];
  }

  for (ll i = 0; i <= n; i++) {
    ll change;
    change = r * i + ruiseki_l[n - i];
    if (ans > change) {
      ans = change;
    }
  }

  cout << ans << endl;
  return 0;
}
