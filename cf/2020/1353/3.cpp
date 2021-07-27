#include <bits/stdc++.h>

#define ll long long int
#define MAXI 1000005
using namespace std;

ll t;
ll n;
ll arr[MAXI];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        ll ans = 0;
        ll curr = 3;
        while (curr <= n) {
            if (arr[curr]) {
                ans += arr[curr];
            } else {
                arr[curr] = ((curr * curr) - ((curr - 2) * (curr - 2))) * (curr / 2);
                ans += arr[curr];
            }
            curr += 2;
        }
        cout << ans << endl;
    }

    return 0;
}