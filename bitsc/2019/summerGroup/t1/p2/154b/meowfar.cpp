// Author: πα

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

map<int, int> factorize(int x)
{
    int n = x;
    map<int, int> m;
    for(int i = 2; i*i <= n and x > 1; ++i)
        while(x % i == 0)
            m[i]++, x /= i;
    if(x > 1)
        m[x]++;
    return m;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> pf(n+1);
    vector<bool> st(n+1);
    while(m--)
    {
        char c;
        int x;
        cin >> c >> x;
        if(c == '+')
        {
            if(st[x])
            {
                cout << "Already on" << '\n';
                continue;
            }
            auto fs = factorize(x);
            int conflict = 0;
            for(auto [it, f] : fs)
                if(pf[it])
                    conflict = pf[it];
            if(conflict)
                cout << "Conflict with " << conflict << '\n';
            else
            {
                for(auto [it, f] : fs)
                    pf[it] = x;
                st[x] = 1;
                cout << "Success" << '\n';
            }
        }
        else
        {
            bool on = 1;
            if(st[x])
            {
                for(auto [it, f] : factorize(x))
                    pf[it] = 0;
                st[x] = 0;
                cout << "Success" << '\n';
            }
            else
                cout << "Already off" << '\n';
        }
    }
    return 0;
}