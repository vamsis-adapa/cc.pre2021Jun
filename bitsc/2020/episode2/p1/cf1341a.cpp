#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n, a, b, c, d;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> a >> b >> c >> d;
        ll mini = (a - b) * n;
        ll maxi = (a + b) * n;
        ll destmax = c + d;
        ll destmin = c - d;

        if ((mini <= destmax && maxi >= destmax) || (mini <= destmin && maxi >= destmin) || (mini >= destmin && maxi <= destmax)) {
            cout << "yes" << endl;
        } else
            cout << "no" << endl;
    }

    return 0;
}