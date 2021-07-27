#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100  // 0000

ll n, m;

ll modulo(int a, int m) {
  ll k = a % m;
  if (k >= 0)
    return k;
  else
    return k + m;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;
  set<ll> a;
  set<ll> b;

  ll k;
  for (ll i = 0; i < n; i++) {
    cin >> k;
    a.insert(k);
  }
  for (ll i = 0; i < n; i++) {
    cin >> k;
    b.insert(k);
  }

  auto fir_b = b.begin();

  set<ll> pos_x;
  for (auto iter = a.begin(); iter != a.end(); iter++) {
    ll t = modulo(*fir_b - *iter, m);
    pos_x.insert(t);
  }

  for (auto iter = pos_x.begin(); iter != pos_x.end(); iter++) {
    set<ll> temp;

    for (auto iter_a = a.begin(); iter_a != a.end(); iter_a++) {
      temp.insert((*iter + *iter_a) % m);
    }
    if (temp == b) {
      cout << *iter << endl;

      return 0;
    }
  }
  cout << 0 << endl;

  return 0;
}