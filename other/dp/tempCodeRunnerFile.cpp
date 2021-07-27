#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> coins;

  coins = {1, 2, 3, 5};
  int total = 15;

  vector<int> ans = vector<int>(total + 1, INT32_MAX);
  ans[0] = 0;

  for (int checkr = coins[0]; checkr <= total; checkr++) {
    int cur_min = INT32_MAX;
    for (auto coi_ded = coins.begin();
         coi_ded != coins.end() && *coi_ded <= checkr; coi_ded++) {
      int previous = ans[checkr - *coi_ded];

      cur_min = min(previous, cur_min);
    }
    if (cur_min != INT32_MAX) ans[checkr] = cur_min + 1;
  }
  cout << ans[total];
  return 0;
}