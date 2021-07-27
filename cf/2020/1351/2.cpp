#include<bits/stdc++.h>

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
        
        if ( (a==c) && (b+d==a))
            cout<< "YES"<<endl;
        else if ( (a == d) && (b+c ==a))
            cout<<"YES"<<endl;
        else if ( (b== c)&& (a+d ==b))
            cout<< "YES"<<endl;
        else if ((b==d) &&(a+c ==b))
            cout<<"yes"<<endl;
        else 
            cout<< "no"<< endl;
    }

    return 0;
}