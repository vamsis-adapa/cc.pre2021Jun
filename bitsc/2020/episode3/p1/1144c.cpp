#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 // 0000

int arr[1000005];
vector<int> a;

set<int> inc;
set<int> decr;

int
main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;

  int k;

  cin >> n;
  while (n--) {
    cin >> k;
    arr[k] += 1;
    a.push_back(k);
    if (arr[k] > 2) {
      cout << "NO" << endl;
      return 0;
    } else if (arr[k] == 1) {
      inc.insert(k);
    } else {
      decr.insert(k);
    }
  }

  cout << "YES" << endl;

  cout << inc.size() << endl;

  for (auto iter = inc.begin(); iter != inc.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;

  cout << decr.size() << endl;

  for (auto iter = decr.rbegin(); iter != decr.rend(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;

  return 0;
}