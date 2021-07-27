#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 // 0000

ll t = 1;
int arr[200005];

int
main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> t;
  while (t--) {
    map<int, int> candies;
    int n;
    cin >> n;
    int k;
    while (n--) {
      cin >> k;
      candies[k] += 1;
    }
    int tot = 0;
    int cur = INT_MAX;
    vector<int> choc;
    for (auto iter = candies.begin(); iter != candies.end(); iter++) {
      choc.push_back(iter->second);
    }
    sort(choc.rbegin(), choc.rend(), greater<>());
    for (auto iter = choc.begin(); iter != choc.end() && cur != 0; iter++) {
      if (*iter < cur) {
        tot += *iter;
        cur = *iter;
      } else {
        tot += cur - 1;
        cur = cur - 1;
      }
    }
    cout << tot << endl;
  }
  return 0;
}