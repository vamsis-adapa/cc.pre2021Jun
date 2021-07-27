#include <bits/stdc++.h>
using namespace std;

#define MAX 15  //
#define ll long long int

ll n;
string inputString;
stack<string::iterator> starts;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> inputString;
    int index = 0;
    for (auto iter = inputString.begin(); iter != inputString.end(); iter++) {
        if (*iter == '(') {
            starts.push(iter);
        }
        if (*iter == ')') {
            auto star = starts.top();
            reverse(star, iter);
            starts.pop();
        }
        index++;
    }
    for (auto iter = inputString.begin(); iter != inputString.end(); iter++) {
        if (*iter == '(' || *iter == ')') {
            iter = inputString.erase(iter);
            iter--;
        }
    }
    cout << inputString << endl;
    return 0;
}
