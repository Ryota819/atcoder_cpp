#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  if (a % 2 == 0 || b % 2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }

  return 0;
}
