#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n, m, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> m >> k;
        ll num_per = n / k;
        if (num_per >= m) {
            cout << m << endl;
        } else {
            ll rem = m - num_per;
            ll per_per = rem / (k - 1);
            ll ex = (bool)(rem % (k - 1));
            cout << num_per - (per_per + ex) << endl;
        }
    }

    return 0;
}