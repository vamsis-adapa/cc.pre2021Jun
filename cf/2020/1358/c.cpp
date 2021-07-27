#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll x_1, x_2, y_2, y_1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> x_1 >> y_1 >> x_2 >> y_2;

        cout << (x_2 - x_1) * (y_2 - y_1) + 1 << endl;
    }

    return 0;
}