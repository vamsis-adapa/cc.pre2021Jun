#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 // 0000

vector<pair<int, int>> students;

int n, m, k;

int
main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m >> k;
  students = vector<pair<int, int>>(n, make_pair(0, 0));

  for (int i = 0; i < n; i++) {
    cin >> students[i].second;
  }
  for (int i = 0; i < n; i++) {
    cin >> students[i].first;
  }
  set<int> shosen;

  for (int i = 0; i < k; i++) {
    int t = 0;
    cin >> t;
    shosen.insert(students[t - 1].second);
  }

  sort(students.rbegin(), students.rend());

  int prev = -1;

  for (pair<int, int> x : students) {
    if (x.first != prev) {
      shosen.erase(x.second);
      prev = x.first;
    }
  }
  cout << shosen.size();
  return 0;
}