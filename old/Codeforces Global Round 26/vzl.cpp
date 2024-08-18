#include <bits/stdc++.h>
#define N 100005
using namespace std;
long long n, m, cnt, qaq, sum1, sum2;
int main() {
  long long a[N];
  cin >> n;
  for (int i = 0; i < n; i++) {
    memset(a, 0, sizeof(a));
    cnt = 0, qaq = 0;
    cin >> m;
    while (m > 0) {
      a[cnt] = m % 10;
      m /= 10;
      cnt++;
    }
    if (a[0] == 9)
      cout << "NO" << endl;
    else {
      for (int j = 1; j < cnt - 1; j++) {
        if (a[j] == 0 && qaq == 0) {
          cout << "NO" << endl;
          qaq = 1;
        }
      }
      a[cnt - 1] -= 1;
      if (a[cnt - 1] == -1 && qaq == 0)
        cout << "NO" << endl;
      else if (qaq == 0)
        cout << "YES" << endl;
    }
  }
  return 0;
}