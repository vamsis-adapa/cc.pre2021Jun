#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
using namespace std;

ll t;
string s;
ll n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n >> m;
        vector<string> lis;
        for (int i = 0; i < n; i++) {
            cin >> s;
            lis.push_back(s);
        }

        vector<int> chec(n, 0);

        for (int i = 0; i < m; i++) {
            map<int, int> cou;
        }
    }

    return 0;
}