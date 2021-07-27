#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll modulo(int b, int m) {
  ll k = b % m;
  if (k >= 0)
    return k;
  else
    return m + k;
}

ll verify(vector<ll> a, vector<ll> b, ll x, ll m) {
  for (ll i = 0; i < a.size(); i++) {
    a[i] = (a[i] + x) % m;
  }
  sort(a.begin(), a.end());
  if (a == b)
    return x;
  else
    return INT_MAX;
}

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a;
  vector<ll> b;

  ll te;
  for (ll i = 0; i < n; i++) {
    cin >> te;
    a.push_back(te);
  }

  for (ll i = 0; i < n; i++) {
    cin >> te;
    b.push_back(te);
  }
  sort(b.begin(), b.end());

  ll x = 0;
  ll ans = INT_MAX;
  set<ll> x_val;
  ll x_si = x_val.size();
  for (ll i = 0; i < a.size(); i++) {
    x = (modulo((b[0] - a[i]), m));

    ans = min(ans, verify(a, b, x, m));
  }
  cout << ans << endl;
}