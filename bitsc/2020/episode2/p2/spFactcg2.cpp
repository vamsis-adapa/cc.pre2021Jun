#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

int t;

int calc_primes(int n, vector<int> &primes);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> primes;
    calc_primes(10000007, primes);
    cout << primes.size() << endl;
    while (cin >> t) {
        cout << "1";
        for (auto iter = primes.begin(); iter != primes.end() && (*iter * *iter <= t); iter++) {
            int c = *iter;
            while (!(t % c)) {
                cout << " x " << c;
                t = t / c;
            }
        }
        if (t - 1) {
            cout << " x " << t;
        }
        cout << "\n";
    }

    return 0;
}

int calc_primes(int n, vector<int> &primes) {
    if (n < 2)
        return 1;
    vector<int> chec(n + 1, 0);
    primes.push_back(2);
    int i = 0;
    for (i = 3; i * i <= n; i += 2) {
        if (!chec[i]) {
            primes.push_back(i);
            for (int k = i * i; k <= n; k += 2 * i) {
                chec[k] = 1;
            }
        }
    }
    for (int k = i; k * k <= n; k += 2) {
        if (!chec[k]) {
            primes.push_back(k);
        }
    }
    return 0;
}