#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n, m, x, y;

ll arr[1005][1005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> m >> x >> y;

        y = min(2 * x, y);

        ll num_x = 0,
           num_y = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            ll adj = 0;
            for (int j = 0; j < m; j++) {
                if (s[j] == '*') {
                    arr[i][j] = 0;
                    adj = 0;
                } else {
                    arr[i][j] = 1;
                    if (adj) {
                        num_y++;
                        num_x--;
                        adj = 0;
                    } else {
                        num_x++;
                        adj = 1;
                    }
                }
            }
        }
        cout << num_x * x + num_y * y << endl;
    }

    return 0;
}