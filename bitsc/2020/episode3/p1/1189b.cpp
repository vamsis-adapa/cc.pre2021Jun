#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 // 0000

ll n;
vector<ll> choc;

int
main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    choc.push_back(t);
  }
  sort(choc.begin(), choc.end());
  if (choc[n - 1] >= choc[n - 2] + choc[n - 3]) {
    cout << "NO" << endl;
    return 0;
  } else {
    cout << "YES" << endl;
    for (int i = 0; i < n - 2; i++) {
      cout << choc[i] << " ";
    }
    cout << choc[n - 1] << " " << choc[n - 2] << endl;
  }
  return 0;
}