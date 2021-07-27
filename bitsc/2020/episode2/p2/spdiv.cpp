#include <bits/stdc++.h>

#define ll long long int

using namespace std;

#define MAXI 1000

vector<int> prime;

int arr[MAXI + 1];

void primes() {
    int i = 2;
    for (i = 1; i * i <= MAXI; i++) {
        if (!arr[i]) {
            prime.push_back(i);
        }
        for (int k = i * 2; k * k <= MAXI; k += i) {
            arr[k] += 1;
        }
    }
}

set<int> pos;

int main() {
    int num = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    primes();
    for (int i = 0; i < prime.size(); i++) {
        for (int j = i + 1; j < prime.size(); j++) {
            pos.insert(prime[i] * prime[j]);
        }
    }

    for (int i = 2; i <= MAXI; i++) {
        int cou = 0;
        int k;
        cou = arr[k];
        if (pos.find(cou) != pos.end()) {
            if (!(num % 9))
                cout << i << endl;
            num++;
        }
    }

    return 0;
}