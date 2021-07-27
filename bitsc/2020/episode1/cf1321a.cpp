#include <bits/stdc++.h>

#define ll long long int

using namespace std;

#define lar 105

ll n, t;
ll arrR[105], arrB[105];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arrR[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arrB[i];
    }
    int pos = 0, neg = 0, neut = 0;

    for (int i = 0; i < n; i++) {
        if (arrR[i] > arrB[i])
            pos++;
        else if (arrR[i] < arrB[i])
            neg++;
        else
            neut++;
    }
    if (neut == n || pos == 0) {
        cout << -1;
        return 0;
    }
    neg++;
    ll k = neg / pos;

    if (k * pos < neg)
        k++;
    cout << k;
    return 0;
}