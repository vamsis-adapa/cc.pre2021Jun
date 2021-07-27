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
        vector<int> choc;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            choc.push_back(k);
        }
        sort(choc.begin(), choc.end());
        int mim = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            mim = min(abs(choc[i] - choc[i + 1]), mim);
        }
        cout << mim << endl;
    }

    return 0;
}