#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  } else if (op == "-") {
    cout << A - B << endl;
  } else if (op == "*") {
    cout << A * B << endl;
  } else if (op == "/" && B != 0) {
    cout << A / B << endl;
  } else {
    cout << "error" << endl;
  }

  return 0;
}
