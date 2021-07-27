#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n, k;

int func(int n) {
    if (n % 2 == 0) {
        return 2;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if ((n / i) * i == n) {
                return i;
            }
        }
    }
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> k;
        while (k--) {
            n = n + func(n);
            if (n % 2 == 0) {
                n = n + 2 * (k);
                break;
            }
        }
        cout << n << endl;
    }

    return 0;
}