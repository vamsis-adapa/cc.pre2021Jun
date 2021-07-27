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
        string s;
        int num1 = 0, num0 = 0;
        vector<int> lent;
        for (int a = 0; a < n; a++) {
            cin >> s;
            lent.push_back(s.size());
            for (auto iter = s.begin(); iter != s.end(); iter++) {
                if (*iter == '1')
                    num1++;
                else if (*iter == '0')
                    num0++;
            }
        }

        sort(lent.begin(), lent.end());
        int count = 0;
        for (int a = 0; a < n; a++) {
            if (lent[a] % 2 == 0) {
                int si = lent[a];
                if (num1 >= si) {
                    num1 -= si;
                    count++;
                } else if (num0 >= si) {
                    num0 -= si;
                    count++;
                } else {
                    for (int i = 0; i <= lent[a]; i += 2) {
                        if (num0 >= i && num1 >= lent[a] - i) {
                            num0 = num0 - i;
                            num1 = num1 - lent[a] + i;
                            count++;
                            break;
                        }
                    }
                }
            }
        }
        for (int a = 0; a < n; a++) {
            if (lent[a] % 2) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}