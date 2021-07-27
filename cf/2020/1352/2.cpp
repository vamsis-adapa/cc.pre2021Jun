#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll t;
ll n;
ll k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> k;
        if (k > n) {
            cout << "no" << endl;
            continue;
        }
        if (n % 2) {
            if (!(k % 2)) {
                cout << "no" << endl;
                continue;
            }
            cout << "yes" << endl;
            ll tme = k;
            while (--tme) {
                cout << 1 << " ";
            }
            cout << n - k + 1 << endl;
        } else {
            if (!(k % 2)) {
                ll tme = k;
                cout << "yes" << endl;
                while (--tme) {
                    cout << 1 << " ";
                }
                cout << n - k + 1;
                cout << endl;
            } else {
                ll tme = k;
                if (2 * (k - 1) >= n) {
                    cout << "no" << endl;
                    continue;
                } else {
                    cout << "yes" << endl;
                    while (--tme) {
                        cout << 2 << " ";
                    }
                    cout << n - 2 * (k - 1) << endl;
                }
            }
        }
    }

    return 0;
}