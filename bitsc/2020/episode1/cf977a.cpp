#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> k;

    while (k--) {
        if (n % 10)
            n--;
        else
            n = n / 10;
    }
    cout << n;
    return 0;
}