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

    cin >> t;

    while (t--) {
        cin >> n >> m;

        if (((n % 2) == 0 || (m % 2) == 0)) {
            cout << m * n / 2 << endl;
        } else {
            cout << (((m * n) - 1) / 2) + 1 << endl;
        }
    }

    return 0;
}