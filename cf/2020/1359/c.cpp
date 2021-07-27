#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll t;

double temper(ll n, double hot, double cold) {
  return (n * hot + (n - 1) * cold) / (2 * n - 1);
}

ll binary_sea(double hot, double cold, double req) {
  ll high = 100000000;
  ll low = 1;
  ll mid = (high + low) / 2;
  while (low <= high) {
    mid = (low + high) / 2;

    if (temper(mid, hot, cold) == req) {
      return mid;
    } else if (temper(mid, hot, cold) > req) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return mid;
}

int main() {
  cin >> t;
  while (t--) {
    double hot, cold, req;
    cin >> hot >> cold >> req;
    double mean = (hot + cold) / 2;
    if (req <= mean) {
      cout << 2 << endl;
      continue;
    }
    ll ans = binary_sea(hot, cold, req);
    ll freq = ans;

    double k1 = (temper(freq, hot, cold) - req);
    double k2 = temper(freq + 1, hot, cold) - req;
    if (abs(temper(freq, hot, cold) - req) >
        abs(temper(freq + 1, hot, cold) - req)) {
      ans = freq + 1;
    }
    k1 = temper(freq, hot, cold) - req;
    k2 = temper(freq - 1, hot, cold) - req;

    if (abs(temper(freq, hot, cold) - req) >=
        abs(temper(freq - 1, hot, cold) - req)) {
      ans = freq - 1;
    }
    cout << 2 * ans - 1 << endl;
  }

  return 0;
}