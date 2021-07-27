#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    t = 1;

    while (t--) {
        cin >> n >> m;
        vector<ll> arr(5, n / 5);
        vector<ll> arrm(5, m / 5);
        ll te = (m / 5) * 5;
        while (te != m) {
            te++;
            arrm[te % 5]++;
        }
        te = (n / 5) * 5;
        while (te != n) {
            te++;
            arr[te % 5]++;
        }

        ll ans = 0;
        for (int i = 0; i < 5; i++) {
            ans += arr[i] * arrm[(5 - i) % 5];
        }
        cout << ans << endl;
    }

    return 0;
}