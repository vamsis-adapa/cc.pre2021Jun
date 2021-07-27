#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    ll num5 = 0;
    ll curr = 1;
    vector<ll> choc;
    while (num5 <= n) {
        ll te = curr;
        while (!(te % 5)) {
            num5 += 1;
            te = te / 5;
        }
        if (num5 == n) {
            choc.push_back(curr);
        }
        curr++;
    }

    cout << choc.size() << endl;
    for (auto iter = choc.begin(); iter != choc.end(); iter++) {
        cout << *iter << " ";
    }
    return 0;
}