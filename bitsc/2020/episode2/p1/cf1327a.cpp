#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> k;
        if ((n + k) % 2) {
            cout << "NO" << endl;
            continue;
        }
        if (k * k <= n) {
            cout << "YES" << endl;
        } else
            cout << "no" << endl;
    }

    return 0;
}