#include <bits/stdc++.h>

#define ll long long int
#define MAXI 500005
using namespace std;

ll t;
ll n;

bool comparator(const pair<int, pair<int, int>>& lhs, const pair<int, pair<int, int>>& rhs) {
    if (lhs.first > rhs.first) {
        return true;
    } else if (lhs.first < rhs.first) {
        return false;
    } else {
        return (lhs.second < rhs.second);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> arr(n, 0);
        vector<pair<int, pair<int, int>>> segs;
        segs.push_back(make_pair(n, make_pair(0, n - 1)));
        for (int i = 1; i <= n; i++) {
            sort(segs.begin(), segs.end(), comparator);

            int l = segs[0].second.first;
            int r = segs[0].second.second;
            int curr_division = (l + r) / 2;
            arr[curr_division] = i;
            segs.erase(segs.begin());
            if (l == r)
                continue;
            segs.push_back(make_pair(curr_division - l, make_pair(l, curr_division - 1)));
            segs.push_back(make_pair(r - curr_division, make_pair(curr_division + 1, r)));
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}