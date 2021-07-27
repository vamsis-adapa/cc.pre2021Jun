#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n;

struct comparator {
    int operator()(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) const {
        if (a.first != b.first)
            return a.first > b.first;
        else
            return a.second.first < b.second.first;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        set<pair<int, pair<int, int>>, comparator> arr;
        vector<int> ans(n, 0);
        ll l = 0;
        ll r = n - 1;
        arr.insert(make_pair(r - l + 1, make_pair(l, r)));

        for (int i = 1; i <= n; i++) {
            l = arr.begin()->second.first;
            r = arr.begin()->second.second;
            ll curr = (l + r) / 2;
            ans[curr] = i;
            arr.erase(arr.begin());
            arr.insert(make_pair(curr - l, make_pair(l, curr - 1)));
            arr.insert(make_pair(r - curr, make_pair(curr + 1, r)));
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}