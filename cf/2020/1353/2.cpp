#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

int t;
int n, m, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    int te;
    while (t--) {
        cin >> n >> k;
        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            cin >> te;
            a.push_back(te);
        }
        for (int i = 0; i < n; i++) {
            cin >> te;
            b.push_back(te);
        }
        while (k--) {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if (a[0] >= b[n - 1]) {
                break;
            } else {
                int temp = a[0];
                a[0] = b[n - 1];
                b[n - 1] = temp;
            }
        }
        int su = 0;
        for (int i = 0; i < n; i++) {
            su += a[i];
        }
        cout << "---  " << su << endl;
    }

    return 0;
}