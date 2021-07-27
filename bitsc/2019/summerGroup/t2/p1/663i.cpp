#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n;

ll pow( ll a, ll b);

int main()
{
	cin >> n;
	ll temp = pow(4,n-3);
	ll ans=2*3*temp*4+(n-3)*9*temp;
	cout<< ans;
	return 0;
}

ll pow( ll a, ll b)
{
	if (b==0)
		return 1;
	ll ret = pow(a, b/2);
	if(b%2==0)
		return ret*ret;
	else return ret*ret*a;
}

