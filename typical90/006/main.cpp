#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int N, K;
string S;
int nex[100010][26];

int main() {
  cin >> N >> K;
  cin >> S;

  for (int i = 0; i < 26; ++i) nex[S.size()][i] = S.size();
  for (int i = (int)S.size() - 1; i >= 0; --i) {
    for (int j = 0; j < 26; ++j) {
      if ((int)(S[i] - 'a') == j) {
        nex[i][j] = i;
      } else {
        nex[i][j] = nex[i + 1][j];
      }
    }
  }

  string Answer = "";
  int CurrentPos = 0;
  for (int i = 1; i <= K; i++) {
    for (int j = 0; j < 26; j++) {
      int NexPos = nex[CurrentPos][j];
      int MaxPossibleLength = (int)(S.size() - NexPos - 1) + i;
      if (MaxPossibleLength >= K) {
        Answer += (char)('a' + j);
        CurrentPos = NexPos + 1;
        break;
      }
    }
  }

  cout << Answer << endl;
  return 0;

  return 0;
}
