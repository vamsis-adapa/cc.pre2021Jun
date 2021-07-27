#include<bits/stdc++.h>

/* doesn't work */

#define ll long long int

using namespace std;

ll t;
ll a,b,c,d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>> t;

    while(t--)
    {
        cin>>a>>b>>c>>d;
        if (!(a xor b)|| !(c xor d))
        {
            cout<< "NO"<<endl;
            continue;
        }
        ll y = a ^ c ^ d;
        if ( b+y == c+d -y)
        {
            cout<< "YES"<<endl;
            continue;
        }
        y = b ^ c ^ d;
        if (a+y == c+d -y)
        {
            cout<<"YES"<< endl;
            continue;
        }
        cout<<"NO"<<endl;


    }

    return 0;
}