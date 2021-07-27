#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MAXIM 100 // 0000

ll n, m;

vector<ll> primes;

void cal_prim(ll n, vector<ll> &primes) {
    vector<int> arr(n + 1, 0);
    ll i = 2;
    for (i = 2; i * i <= n; i++) {
        if (arr[i] == 0) {
            primes.push_back(i);
            for (ll j = i * i; j <= n; j += i) {
                arr[j] = 1;
            }
        }
    }
    for (int j = i; j <= n; j++) {
        if (arr[j] == 0) {
            primes.push_back(j);
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    vector<int> reactors_status(n + 1, 0);
    set<int> reactors_stat;
    set<ll> tots;

    cal_prim(n, primes);

    while (m--) {
        char c;
        ll num;
        cin >> c >> num;
        if (c == '-') {
            if (reactors_status[num]) {
                reactors_status[num] = 0;
                reactors_stat.erase(reactors_stat.find(num));

                for (auto iter = primes.begin(); iter != primes.end(); iter++) {
                    if (num % *iter == 0) {
                        tots.erase(tots.find(*iter));
                    }
                }

                cout << "Success\n";
            } else {
                cout << "Already off\n";
            }
        } else {
            if (reactors_status[num] == 1) {
                cout << "Already on\n";
                continue;
            }
            vector<ll> prim_prez;
            int cz = 0;
            for (auto iter = primes.begin(); iter != primes.end(); iter++) {
                if (!(num % *iter)) {
                    prim_prez.push_back(*iter);
                    auto chekr = tots.find(*iter);

                    if (chekr != tots.end()) {
                        {
                            for (auto ite = reactors_stat.begin(); ite != reactors_stat.end();
                                 ite++) {
                                if (*ite % *iter == 0) {
                                    cz = 1;
                                    cout << "Conflict with " << *ite << "\n";
                                    break;
                                }
                            }
                        }
                    }
                }
                if (cz)
                    break;
            }
            if (cz)
                continue;
            reactors_stat.insert(num);
            reactors_status[num] = 1;
            for (auto iter = prim_prez.begin(); iter != prim_prez.end(); iter++) {
                tots.insert(*iter);
            }
            cout << "Success\n";
        }
    }
    return 0;
}