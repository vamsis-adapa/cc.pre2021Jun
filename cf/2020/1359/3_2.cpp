#include <bits/stdc++.h>
#include <math.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
double hot, cold, res;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> t;

  while (t--) {
    cin >> hot >> cold >> res;
    double med = (hot + cold) / 2;
    double mix = hot + cold;
    double temp;
    if (res <= med) {
      cout << 2 << endl;
    } else {
      double n = (hot - res) / (2 * res - hot - cold);
      n = 2 * n + 1;
      double integ;

      ll m1, m2;
      if ((int)integ % 2) {
        m1 = integ;
        m2 = integ + 2;
      } else {
        m1 = integ - 1;
        m2 = integ + 1;
      }
      double k = 0;
      k = (m1 - 1) / 2;
      double t1 = ((k + 1) * hot + k * cold) / (m1);
      k = (m2 - 1) / 2;
      double t2 = ((k + 1) * hot + k * cold) / m2;
      if (abs(res - t1) > abs(res - t2)) {
        cout << m2 << endl;
      } else {
        cout << m1 << endl;
      }
    }
  }

  return 0;
}