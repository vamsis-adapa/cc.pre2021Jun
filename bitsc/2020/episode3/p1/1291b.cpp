#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n;
  cin >> n;
  while (n--) {
    ll t;
    cin >> t;
    vector<ll> a;
    for (int i = 0; i < t; i++) {
      int te;
      cin >> te;
      a.push_back(te);
    }

    ll lef_lim = -1;

    for (int i = 0; i < t; i++) {
      if (a[i] >= i) {
        lef_lim = i;
      } else {
        break;
      }
    }
    ll rig_lim = t;
    for (int i = 0; i < t; i++) {
      if (a[t - 1 - i] >= i) {
        rig_lim--;
      } else {
        break;
      }
    }
    if (lef_lim >= rig_lim)
      cout << "Yes" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
