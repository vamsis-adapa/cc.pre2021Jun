#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> coins;

  coins = {1, 2, 3, 5};
  int total = 15;

  std::vector<int> ans = std::vector<int>(total + 1, INT32_MAX);
  ans[0] = 0;

  for (int checkr = coins[0]; checkr <= total; checkr++) {
    int cur_min = INT32_MAX;
    for (auto coi_ded = coins.begin();
         coi_ded != coins.end() && *coi_ded <= checkr; coi_ded++) {
      int previous = ans[checkr - *coi_ded];

      cur_min = std::min(previous, cur_min);
    }
    if (cur_min != INT32_MAX) ans[checkr] = cur_min + 1;
  }
  std::cout << ans[total];
  return 0;
}