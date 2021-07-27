#include <bits/stdc++.h>

using namespace std;

#define ll int
#define MAXIM 100 // 0000

ll n, m;

int bit = 0;

int
add(int k);

int
rem(int k);

vector<ll> primes;

void
cal_prim(ll n, vector<ll>& primes)
{
  vector<int> arr(n + 1, 0);
  ll i = 2;
  for (i = 2; i * i <= n; i++) {
    if (arr[i] == 0) {
      primes.push_back(i);
      for (ll j = i * i; j <= n; j += i) {
        arr[j] = 1;
      }
    }
  }
  for (int j = i; j <= n; j++) {
    if (arr[j] == 0) {
      primes.push_back(j);
    }
  }
  return;
}

vector<ll> divide;

int
main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;

  cal_prim(n, primes);

  divide = vector<ll>(primes.size(), 0);

  while (m--) {
    char c;
    int k;
    cin >> c >> k;
    if (c == '+') {
      int res = add(k);
      if (res == k) {
        cout << "Already on" << endl;
      } else if (res == 0) {
        cout << "Success" << endl;
      } else {
        cout << "Conflict with " << res << endl;
      }
    } else {
      int res = rem(k);
      if (res == 0) {
        cout << "Success" << endl;
      } else {
        cout << "Already off" << endl;
      }
    }
  }
  return 0;
}

int
add(int k)
{
  if (k == 1) {
    if (bit) {
      return 1;
    } else {
      bit = 1;
      return 0;
    }
  }
  auto div_iter = divide.begin();
  for (auto iter = primes.begin(); iter != primes.end(); iter++) {
    if (k % *iter == 0) {
      if (*div_iter == k) {
        return k;
      }
      if (*div_iter != 0) {
        for (auto eraser = divide.begin(); eraser != div_iter; eraser++) {
          if (*eraser == k) {
            *eraser = 0;
          }
        }
        return *div_iter;
      } else {
        *div_iter = k;
      }
    }
    div_iter++;
  }
  return 0;
}

int
rem(int k)
{
  if (k == 1) {
    if (bit) {
      bit = 0;
      return 0;
    }
    return 1;
  }
  auto div_iter = divide.begin();
  int check = 1;
  for (auto iter = primes.begin(); iter != primes.end(); iter++) {
    if (k % *iter == 0) {
      if (*div_iter != k)
        return 1;
      else {
        *div_iter = 0;
        check = 0;
      }
    }
    div_iter++;
  }
  return check;
}