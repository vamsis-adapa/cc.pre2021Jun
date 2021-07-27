#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
string s;

int
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> s;

  auto min = s.begin();

  for (auto iter = s.begin(); iter != s.end(); iter++) {
    if (*iter > *min)
      cout << "Ann" << endl;
    else {
      cout << "Mike" << endl;
      min = iter;
    }
  }
  return 0;
}
