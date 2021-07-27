#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n, 0));
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < n; j++) {
                char c = s[j];
                arr[i][j] = c - '0';
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j]) {
                    if (i == n - 1 || j == n - 1) {
                        ;
                    } else if (arr[i + 1][j] == 1 || arr[i][j + 1] == 1) {
                        ;
                    } else {
                        cout << "NO" << endl;
                        goto exit;
                    }
                }
            }
        }
        cout << "YES" << endl;
    exit:
        continue;
    }

    return 0;
}