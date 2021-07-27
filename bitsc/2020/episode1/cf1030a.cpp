#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, a;
    cin >> n;
    while (n--) {
        cin >> a;
        if (a) {
            cout << "hard" << endl;
            return 0;
        }
    }
    cout << "easy" << endl;
    return 0;
}