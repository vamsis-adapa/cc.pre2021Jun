#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define maxim 1000000

ll arr[maxim + 4];

vector<ll> primes;

int main() {
  for (ll i = 1; i <= maxim; i++) {
    for (ll j = i; j <= maxim; j += i) {
      arr[j] += 1;
    }
    if (arr[i] == 2 && i * i < maxim) {
      primes.push_back(i);
    }
  }

  set<ll> ans;
  for (int i = 0; i < primes.size(); i++) {
    for (int j = i + 1; j < primes.size(); j++) {
      ans.insert(primes[i] * primes[j]);
    }
  }

  int curr = 0;
  for (int i = 1; i <= maxim; i++) {
    if (ans.find(arr[i]) != ans.end()) {
      curr++;
      if (!(curr % 9)) {
        cout << i << "\n";
      }
    }
  }

  return 0;
}