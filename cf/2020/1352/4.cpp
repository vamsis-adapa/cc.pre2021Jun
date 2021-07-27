#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll t;
ll n;
ll arr[20];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--) {
        cin >> n;
        ll tm = 0;
        while (tm < n) {
            cin >> arr[tm++];
        }
        ll count = 0;
        ll a = 0;
        ll b = 0;
        ll left = 0, right = n - 1;
        while (n) {
            while (a <= b) {
                if (arr[left] == 0) {
                    n = 0;
                    break;
                }
                a += arr[left];
                arr[left++] = 0;
            }
            count++;
            if (!n)
                break;
            while (b <= a) {
                if (arr[right] == 0) {
                    n = 0;
                    break;
                }
                b += arr[right];
                arr[right--] = 0;
            }
            count++;
        }
        cout << count << " " << a << " " << b << endl;
    }

    return 0;
}