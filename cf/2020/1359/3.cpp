#include <bits/stdc++.h>

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
    double temp;
    if (res >= hot) {
      cout << 1 << endl;
    } else if (res <= med) {
      cout << 2 << endl;
    } else {
      double diff = INT_MAX;
      ll round = 1;
      while (true) {
        temp = (round * hot + (round - 1) * cold) / (2 * round - 1);
        if (diff > abs(temp - res)) {
          diff = abs(temp - res);
          round++;
        } else {
          cout << 2 * (round - 2) + 1 << endl;
          break;
        }
      }
    }
  }

  return 0;
}