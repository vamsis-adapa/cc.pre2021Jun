#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10  //0005
using namespace std;

ll t;
ll n;
ll arr[MAXI];
ll ans[MAXI];
ll check[MAXI];

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
        ll fin = 0;
        for (int a = 1; a <= n; a++) {
        }
        fin += 1;
        cout << "-----" << fin << endl;
    }

    return 0;
}