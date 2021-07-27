#include <bits/stdc++.h>

using namespace std;

#define ll int
#define MAXIM 100 // 0000

vector<ll> primes;

int
adder(int k);
int
remmer(int k);

void
cal_prim(ll n, vector<ll>& primes)
{
  vector<int> arr(n + 1, 0);
  ll i = 2;
  primes.push_back(i);
  for (i = 3; i * i <= n; i += 2) {
    if (arr[i] == 0) {
      primes.push_back(i);
      for (ll j = i * i; j <= n; j += i) {
        arr[j] = 1;
      }
    }
  }
  for (int j = i; j <= n; j += 2) {
    if (arr[j] == 0) {
      primes.push_back(j);
    }
  }
  return;
}

int t, n, m;
int bit = 0;

vector<int> divs;

int
main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;

  cal_prim(n, primes);
  divs = vector<int>(primes.size(), 0);

  char c;
  int k;

  while (m--) {
    cin >> c >> k;

    if (c == '+') {
      int res = adder(k);
      if (res == 0) {
        cout << "Success"
             << "\n";
      } else if (res == 1) {
        cout << "Already on"
             << "\n";
      } else {
        cout << "Conflict with " << res << "\n";
      }
    } else {
      int res = remmer(k);
      if (res == 0) {
        cout << "Success"
             << "\n";
      } else {
        cout << "Already off"
             << "\n";
      }
    }
  }
  return 0;
}

int
adder(int k)
{
  if (k == 1) {
    if (bit == 1) {
      return 1;
    } else {
      bit = 1;
      return 0;
    }
  }

  vector<vector<int>::iterator> checker;

  auto div_iter = divs.begin();

  for (auto iter = primes.begin(); iter != primes.end(); iter++) {
    if (k % *iter == 0) {
      if (*div_iter == k) {
        return 1;
      } else if (*div_iter == 0) {
        checker.push_back(div_iter);
      } else {
        return *div_iter;
      }
    }
    div_iter++;
  }
  for (auto iter = checker.begin(); iter != checker.end(); iter++) {
    **iter = k;
  }
  return 0;
}

int
remmer(int k)
{
  if (k == 1) {
    if (bit == 1) {
      bit = 0;
      return 0;
    } else
      return 1;
  }

  auto div_iter = divs.begin();

  for (auto iter = primes.begin(); iter != primes.end(); iter++) {
    if (k % *iter == 0) {
      if (*div_iter != k) {
        return 1;
      } else {
        *div_iter = 0;
      }
    }
    div_iter++;
  }
  return 0;
}
