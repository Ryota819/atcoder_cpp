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
#define REPR(i, n) for (int i = n; i >= 0; i--)

// 入力変数宣言
int ax, ay, bx, by, cx, cy, dx, dy;

double getRadian(double cx, double cy, double x1, double y1, double x2,
                 double y2) {
  double bax = x1 - cx;
  double bay = y1 - cy;
  double bcx = x2 - cx;
  double bcy = y2 - cy;

  double babc = bax * bcx + bay * bcy;
  double ban = bax * bax + bay * bay;
  double bcn = bcx * bcx + bcy * bcy;
  double radian = acos(babc / sqrt(ban * bcn));
  // cout << radian * 180 / M_PI << endl;
  return radian * 180 / M_PI;
}

void solve() {
  // if (getRadian(ax, ay, dx, dy, bx, by) > 180.0) {
  //   cout << "No" << endl;
  //   return;
  // }
  // if (getRadian(bx, by, ax, ay, cx, cy) > 180.0) {
  //   cout << "No" << endl;
  //   return;
  // }
  // if (getRadian(cx, cy, bx, by, dx, dy) > 180.0) {
  //   cout << "No" << endl;
  //   return;
  // }
  // if (getRadian(dx, dy, cx, cy, ax, ay) > 180.0) {
  //   cout << "No" << endl;
  //   return;
  // }
  // cout << "Yes" << endl;
  double ans = 0.0;
  ans += getRadian(ax, ay, dx, dy, bx, by);
  ans += getRadian(bx, by, ax, ay, cx, cy);
  ans += getRadian(cx, cy, bx, by, dx, dy);
  ans += getRadian(dx, dy, cx, cy, ax, ay);
  if (ans < 359) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}

int main() {
  // 入力
  cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

  solve();
  return 0;
}
