#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t != 0) {
        vector<ll> prime_factors;
        prime_factorize_1_vector_print(t);
    }

    return 0;
}

int prime_factorize_1_vector_print(long long n) {
    int check = 1;
    for (int i = 2; i * i <= n; i++) {
        if (!(n % i)) {
            check = 0;
            cout << i << "^";
            ll cou = 0;
            while (!(n % i)) {
                // factors.push_back(i);
                n = n / i;
                cou++;
            }
            cout << cou << " ";
        }
    }
    if (check) {
        // factors.push_back(n);
        cout << n << "^" << 1;
    }
    cout << endl;
    return 1;
}

int prime_factorize_1_vector(long long n, vector<long long int> &factors) {
    for (int i = 2; i * i <= n; i++) {
        while (!(n % i)) {
            factors.push_back(i);
            n = n / i;
        }
    }
    if (!factors.size()) {
        factors.push_back(n);
        return 0;
    }
    return 1;
}