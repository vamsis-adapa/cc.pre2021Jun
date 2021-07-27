#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll n;

ll func_difference(ll n) {
    ll k = n * n;
    ll a = 0, b = 0;

    ll fact = 0;
    for (int i = 1; i < n; i++) {
        if (k % i)
            continue;
        fact = k / i;
        if ((i + fact) % 2)
            continue;
        a = (i + fact) / 2;
        b = (fact - i) / 2;
        cout << a << " " << b << endl;
        return a;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    if (func_difference(n))
        return 0;

    cout << -1 << endl;
    return 0;
}