#include <bits/stdc++.h>

#define ll long long int

using namespace std;

set<int> k;

int f(int x) {
    x++;
    while (!(x % 10))
        x = x / 10;
    return x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    while (k.find(n) == k.end()) {
        // cout << n << endl;
        k.insert(n);
        n = f(n);
    }
    cout << k.size();

    return 0;
}