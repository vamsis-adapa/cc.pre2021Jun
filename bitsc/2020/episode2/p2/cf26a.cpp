#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int n;
int calc_primes(int n, vector<int>& primes);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  vector<int> p;
  calc_primes(n + 1, p);
  int cou = 0;
  for (int i = 6; i <= n; i++) {
    int num = 0;
    for (int k = 0; k < p.size() && num <= 2; k++) {
      if (i % p[k] == 0)
        num++;
    }
    if (num == 2)
      cou++;
  }
  cout << cou << endl;

  return 0;
}

int calc_primes(int n, vector<int>& primes) {
  if (n < 2)
    return 1;
  vector<int> chec(n + 1, 0);
  primes.push_back(2);
  int i = 0;
  for (i = 3; i * i <= n; i += 2) {
    if (!chec[i]) {
      primes.push_back(i);
      for (int k = i * i; k <= n; k += 2 * i) {
        chec[k] = 1;
      }
    }
  }
  for (int k = i; k <= n; k += 2) {
    if (!chec[k]) {
      primes.push_back(k);
    }
  }
  return 0;
}