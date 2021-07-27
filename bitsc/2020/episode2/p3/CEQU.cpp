#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 // 0000

ll t = 1;

int
gcd(int a, int b)
{
  if (b == 0) {
    return a;
  } else
    return gcd(b, a % b);
}

int
main()
{
  int ct = 1;
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> t;
  while (t--) {
    int a, b, c;

    cin >> a >> b >> c;

    int k = gcd(a, b);
    if (c % k) {
      cout << "Case " << ct << ": No" << endl;
    } else {
      cout << "Case " << ct << ": Yes" << endl;
    }
    ct++;
  }
  return 0;
}