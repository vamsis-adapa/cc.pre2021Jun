#include <bits/stdc++.h>

#define ll long long int
#define MAXI 10000
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
        vector<int> lis;
        for (int i = 0; i < n; i++) {
            int tmep;
            cin >> tmep;
            lis.push_back(tmep);
        }
        int num = 1;
        sort(lis.begin(), lis.end());
        int curr = 0;
        int prev = num;
        for (int i = 0; i < lis.size(); i++) {
            if ((num + curr) >= lis[i]) {
                num += curr + 1;
                curr = 0;
                prev = lis[i];
            } else {
                prev = lis[i];
                curr++;
            }
        }
        cout << num << endl;
    }

    return 0;
}