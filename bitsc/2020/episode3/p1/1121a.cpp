#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 // 0000

vector<pair<int, pair<int, int>>> students;

int n, m, k;

int
main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m >> k;

  students =
    vector<pair<int, pair<int, int>>>(n, make_pair(0, make_pair(0, 9)));

  for (int i = 0; i < n; i++) {
    cin >> students[i].second.first;
    students[i].second.second = i;
  }

  for (int i = 0; i < n; i++) {
    cin >> students[i].first;
  }

  set<int> chosen;
  for (int i = 0; i < k; i++) {
    int te;
    cin >> te;
    chosen.insert(te);
  }

  sort(students.begin(), students.end());

  int count = 0;
  vector<int> selec;
  int prev = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (prev != students[i].first) {
      auto finder = chosen.find(students[i].second.first);
      if (finder != chosen.end()) {
        chosen.erase(finder);
      }
      prev = students[i].first;
    }
  }
  cout << chosen.size() << endl;
  return 0;
}