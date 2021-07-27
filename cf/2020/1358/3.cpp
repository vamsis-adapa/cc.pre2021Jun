#include <bits/stdc++.h>

#define ll long long int
#define MAXI 1
using namespace std;

ll t;
ll x_1, x_2, y_1, y_2;

ll fac(ll n);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> x_1 >> y_1 >> x_2 >> y_2;
        ll ver_dist = x_2 - x_1;
        ll horiz_dist = y_2 - y_1;
        ll num = 1;

        for (ll i = ver_dist + horiz_dist; i > max(ver_dist, horiz_dist); i--) {
            num *= i;
        }
        for (ll i = 1; i <= min(horiz_dist, ver_dist); i++) {
            num /= i;
        }
        cout << num << endl;
    }

    return 0;
}

ll choco;
ll straw;

ll fac(ll n) {
    ll ans = 1;
    for (ll i = 1; i <= n; i++) {
        ans = ans * i;
    }
    return ans;
}

ll bin_pow(ll n, ll k) {
    if (k == 0)
        return 1;
    ll y = bin_pow(n, k / 2);
    if (k % 2) {
        return y * y;
    } else
        return n * y * y;
}