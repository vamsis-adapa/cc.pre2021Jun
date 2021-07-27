#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll t;
ll n, k;        

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    
    while(t--)
    {  
        int check=1;
        cin >> n>>k;
        if ((n >= k*k)&&(!((n+k)%2)) )
        {
            cout<<"YES"<<endl;
            check =0;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}