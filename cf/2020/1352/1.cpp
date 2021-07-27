#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll t;
ll n;

void pow(ll n);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        vector<ll> arr;
        vector<ll> pw;
        cin >> n;
        ll count = 0;
        ll i = 0;
        while (n) {
            if (n % 10) {
                arr.push_back(n % 10);
                pw.push_back(i);
                count++;
            }
            i++;
            n = n / 10;
        }
        i = 0;
        cout << count << endl;
        for (auto iter = arr.begin(); iter != arr.end(); iter++) {
            cout << *iter;
            pow(pw[i]);
            i++;
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

void pow(ll n) {
    while (n--) {
        cout << "0";
    }
}