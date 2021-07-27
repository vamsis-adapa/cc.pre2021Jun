#include <bits/stdc++.h>

#define ll long long int
#define MAXI 100005
using namespace std;

ll t;
ll n;
ll arr[MAXI];
ll res[MAXI];
vector<ll> check;

ll func(int a) {
    if (check[a]) {
        return res[a];
    }

    ll longest_cont = 0;
    for (int i = 2 * a; i <= n; i += a) {
        if (arr[i] > arr[a]) {
            longest_cont = max(longest_cont, 1 + func(i));
            int o;
        }
    }
    res[a] = longest_cont;
    check[a] = 1;
    return longest_cont;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        check = vector<ll>(MAXI, 0);
        for (int a = 1; a <= n; a++) {
            cin >> arr[a];
        }
        ll fin = 0;
        for (int k = 1; k <= n; k++) {
            fin = max(fin, func(k));
        }
        cout << fin + 1 << endl;
    }

    return 0;
}