//https://codeforces.com/problemset/problem/1201/A?fbclid=IwAR2ejuxQxYVO97O9vf9cstunWxyd4BAzQh8DVDFNkUH3n611ieuPWuQ6I2U
#include <bits/stdc++.h>

#define ll long long int

using namespace std;

#define lar 1005

int arr[lar][lar];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int stu, q;
    cin >> stu >> q;

    for (int i = 0; i < stu; i++) {
        for (int k = 0; k < q; k++) {
            char te;
            cin >> te;
            arr[i][k] = te - 'A';
        }
    }

    int mar[q];

    for (int i = 0; i < q; i++) {
        cin >> mar[i];
    }
    int ouc = 0;
    for (int i = 0; i < q; i++) {
        vector<int> rec(5, 0);
        for (int k = 0; k < stu; k++) {
            rec[arr[k][i]]++;
        }
        int maxi = 0;
        for (int j = 0; j < 5; j++) {
            maxi = max(maxi, rec[j]);
        }
        ouc += maxi * mar[i];
    }
    cout << ouc;

    return 0;
}