#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, d;
  cin >> a >> b >> d;

  double r = d * M_PI / 180;
  double x = a * cos(r) - b * sin(r);
  double y = a * sin(r) + b * cos(r);

  printf("%.10f %.10f\n", x, y);
  return 0;
}
