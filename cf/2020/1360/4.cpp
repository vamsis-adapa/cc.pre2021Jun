#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n;
ll k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> k;
        ll ans = n / 1;
        for (int i = 1; i * i <= n && i <= k; i++) {
            if (!(n % i)) {
                if (n / i <= k) {
                    cout << i << endl;
                    goto exit;
                }
                ans = n / i;
            }
        }
        cout << ans << endl;
    exit:
        continue;
    }

    return 0;
}