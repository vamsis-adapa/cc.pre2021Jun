#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100000  // 0000

int arr[MAXIM];
vector<int> primes;

ll n, k;

void calc_primes() {
  for (int i = 2; i <= n; i++) {
    if (arr[i] == 0) {
      primes.push_back(i);
      for (int j = i * i; j <= n; j += i) {
        arr[j] = 1;
      }
    }
  }
}

int main() {
  cin >> n >> k;
  calc_primes();
  ll cou = 0;
  for (int i = 0; i < primes.size() - 1; i++) {
    ll choc = primes[i] + primes[i + 1] + 1;
    if (choc > n) break;
    if (arr[primes[i] + primes[i + 1] + 1] == 0) {
      cou++;
    }
  }
  if (cou >= k)
    cout << "yes";
  else
    cout << "no";
  return 0;
}
