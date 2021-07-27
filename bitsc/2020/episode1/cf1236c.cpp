#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ll k = i;
            if (j % 2)
                k = n - i - 1;
            cout << n * j + k + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}