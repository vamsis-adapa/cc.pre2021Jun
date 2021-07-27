#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(int argc, char const *argv[]) {
  ll n;
  ll k;
  vector<ll> arr;
  vector<ll> sum;
  sum.push_back(0);

  cin >> n;
  ll te;
  for (int i = 0; i < n; i++) {
    cin >> te;
    arr.push_back(te);
    sum.push_back(sum[sum.size() - 1] + te);
  }
  cin >> k;

  int ke;

  for (int i = 0; i < k; i++) {
    cin >> te >> ke;
    cout << sum[ke + 1] - sum[te] << endl;
  }

  return 0;
}
