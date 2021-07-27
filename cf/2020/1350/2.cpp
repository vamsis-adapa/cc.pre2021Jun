#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10  //0005
using namespace std;

ll t;
ll n;
ll arr[MAXI];
ll ans[MAXI];
ll check[MAXI];

ll dp(int a, ll len) {
    if (check[a]) {
        return ans[a];
    }
    ll farthest = len;
    for (int i = 2 * a; i <= n; i += a) {
        if (arr[a] < arr[i]) {
            farthest = max(farthest, 1 + dp(i, len + 1));
        }
    }
    ans[a] = farthest - len;
    return farthest;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        for (int a = 1; a < n + 1; a++) {
            cin >> arr[a];
        }
        ll fina = 1;
        for (int a = 1; a <= n; a++) {
            fina = max(fina, dp(a, 0));
        }
        cout << "--  " << fina << endl;
    }

    return 0;
}