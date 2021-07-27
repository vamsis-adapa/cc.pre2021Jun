#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 //0000

ll t = 1;
ll n, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> k;
        ll n_num = 0, k_num = 0;
        while (n % 2 == 0) {
            n_num++;
            n = n / 2;
        }
        while (k % 2 == 0) {
            k_num++;
            k = k / 2;
        }
        if (k != n) {
            cout << -1 << endl;
        } else {
            ll num_2 = abs(n_num - k_num);
            ll ans = 0;
            ans += num_2 / 3;
            num_2 = num_2 - (num_2 / 3) * 3;
            ans += num_2 / 2;
            num_2 = num_2 - (num_2 / 2) * 2;
            ans += num_2;
            cout << ans << endl;
        }
    }
    return 0;
}