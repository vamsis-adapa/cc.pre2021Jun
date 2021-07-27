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
        vector<int> arr;
        vector<int> arr_odd;
        int odds = 0, evens = 0;
        for (int i = 0; i < n; i++) {
            int tmep;
            cin >> tmep;
            if (tmep % 2)
                arr_odd.push_back(tmep);
            else
                arr.push_back(tmep);
        }
        if (!(arr_odd.size() % 2)) {
            cout << "YES" << endl;
            continue;
        }
        for (auto iter = arr.begin(); iter != arr.end(); iter++) {
            for (auto iters = arr_odd.begin(); iters != arr_odd.end(); iters++) {
                if (abs(*iter - *iters) == 1) {
                    cout << "YES" << endl;
                    goto exit;
                }
            }
        }
        cout << "NO" << endl;
    exit:
        continue;
    }

    return 0;
}