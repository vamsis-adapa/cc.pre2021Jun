#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int bin_search(ll high, ll low);

ll t;
ll n, k;
ll const low_t = 1;
ll const high_t = 2000000000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> k;
        bin_search(high_t, low_t);
    }

    return 0;
}

int bin_search(ll high, ll low) {
    ll mid = 0;
    while (high >= low) {
        // cout << high << " " << low << endl;
        mid = (high + low) / 2;
        ll div = mid / n;
        if ((k > (n - 1) * div) && (k <= (n - 1) * (div + 1))) {
            cout << div * n + k - (n - 1) * div << endl;
            low = high_t;
            high = low_t;
        } else if (k <= (n - 1) * div) {
            high = mid;
        } else {
            low = mid;
        }
    }
    return 0;
}