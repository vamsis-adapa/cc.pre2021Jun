#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n, k;
  vector<ll> a;
  cin >> n >> k;
  ll te;

  set<ll> verif;
  set<ll> pos;
  map<ll, vector<ll>> vals;
  verif.insert(0);

  for (int i = 0; i < n; i++) {
    cin >> te;
    a.push_back(te);
    // vector<ll> emp_vec();
    if (vals[te] == vector<ll>()) {
      while (te) {
        verif.insert(te);
        vals[a[a.size() - 1]].push_back(te);
        te = te / 2;
      }
      vals[a[a.size() - 1]].push_back(0);
    }
  }

  sort(a.begin(), a.end());

  ll mini = INT_MAX;
  for (ll ite : verif) {
    ll num_moves = 0;
    ll cou_pos = 0;
    int flag = 0;

    for (auto i = a.begin(); i != a.end(); i++) {
      int te_cou = 0;
      int va = 0;
      auto pointer = vals[*i];
      for (auto iter = pointer.begin(); iter != pointer.end(); iter++) {
        if (*iter == ite) {
          cou_pos++;
          num_moves += va;
          break;
        }
        va++;
      }
      if (cou_pos >= k) {
        flag = 1;
        break;
      }
      if (num_moves > mini) break;
    }
    if (flag) mini = min(mini, num_moves);
  }

  cout << mini << endl;
  return 0;
}
