#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
vector<pair<int, pair<int, int>>> arr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    ll n;

    while (t--) {
        cin >> n;
        for (int a = 0; a < n; a++) {
            string inp;
            cin >> inp;
            for (auto iter = inp.begin(); iter != inp.end(); iter++) {
                if (*iter == '1') {
                    arr[a].first += 1;
                    arr[a].second.first += 1;
                } else if (*iter == '0') {
                    arr[a].first += 1;
                    arr[a].second.second += 1;
                }
            }
        }
        int cont = 0;
        sort(arr.begin(), arr.end());
        int fr1 = 0, fr0 = 0;
        for (int a = 0; a < n; a++) {
            if (arr[a].first % 2) {
                cont++;
                fr1 += arr[a].second.first;
                fr0 += arr[a].second.second;
                continue;
            }
        }
        for (int a = 0; a < n; a++) {
        }
    }

    return 0;
}