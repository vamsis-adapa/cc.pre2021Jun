#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
ll n;

struct comparator {
    bool operator()(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
        if (a.first > b.first)
            return 1;
        else if (a.first < b.first)
            return 0;
        else
            return a.second.first < a.second.second;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> ans(n, 0);
        set<pair<int, pair<int, int>>, comparator> storage;
        ll l = 0;
        ll r = n - 1;
        ll curr;
        storage.insert(make_pair(r - l + 1, make_pair(r, l)));

        for (int i = 1; i <= n; i++) {
            if (storage.begin()->first == 0) {
                storage.erase(storage.begin());
            }
            r = storage.begin()->second.first;
            l = storage.begin()->second.second;
            curr = (l + r) / 2;
            ans[curr] = i;
            storage.erase(storage.begin());
            if (l == r)
                continue;
            storage.insert(make_pair(r - curr, make_pair(r, curr + 1)));
            storage.insert(make_pair(curr - l, make_pair(curr - 1, l)));
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}