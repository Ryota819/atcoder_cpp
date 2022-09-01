#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int a, b, c, d, e;

int main() {
  cin >> a >> b >> c >> d >> e;
  int first = 1, second = 0;
  int first_num = a, second_num = -1;
  if (first_num != b) {
    second_num = b;
  }
  if (first_num != c) {
    second_num = c;
  }
  if (first_num != d) {
    second_num = d;
  }
  if (first_num != e) {
    second_num = e;
  }

  if (b == first_num) {
    first += 1;
  } else if (b == second_num) {
    second += 1;
  }
  if (c == first_num) {
    first += 1;
  } else if (c == second_num) {
    second += 1;
  }
  if (d == first_num) {
    first += 1;
  } else if (d == second_num) {
    second += 1;
  }
  if (e == first_num) {
    first += 1;
  } else if (e == second_num) {
    second += 1;
  }

  if ((first == 3 && second == 2) || (first == 2 && second == 3)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
