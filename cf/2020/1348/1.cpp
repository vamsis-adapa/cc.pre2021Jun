#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(int argc, char const *argv[])
{
    ll t =0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >>n;
        cout<< 2 * (pow(2,n/2)-1)<<endl;
    }
    
    return 0;
}


