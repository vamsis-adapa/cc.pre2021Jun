#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll a, b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> a >> b;
        ll k = INT_MAX;
        k = min(a + a, b + b);
        k = max(k, a);
        k = max(k, b);
        cout << k * k << endl;
    }

    return 0;
}