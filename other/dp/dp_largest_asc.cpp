#include <iostream>
#include <vector>

int main() {
  std::vector<int> arra = {5, 3, 4, 8, 6, 7};
  std::vector<int> soln = std::vector<int>(arra.size(), 1);

  int ans = INT32_MIN;
  for (int i = 1; i < arra.size(); i++) {
    soln[i] = 1;
    if (arra[i] >= arra[i - 1]) {
      soln[i] = soln[i - 1] + 1;
    }
    ans = std::max(ans, soln[i]);
  }

  std::cout << ans << std::endl;

  return 0;
}