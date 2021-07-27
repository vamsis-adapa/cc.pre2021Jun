#include <bits/stdc++.h>

#define ll long long int
#define MAXI 100005
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
        set<ll> arr;
        ll temp;
        while (n--) {
            cin >> temp;
            arr.insert(temp);
        }
        cout << arr.size() << endl;
    }

    return 0;
}