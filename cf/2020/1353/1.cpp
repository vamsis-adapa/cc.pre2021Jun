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
        if (n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << m << endl;
        } else {
            cout << 2 * m << endl;
        }
    }

    return 0;
}