#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n,a1,a2,k1,k2,maxim,smol,ns;

ll func(ll a1, ll a2,ll k1,ll k2);
ll func2(ll a1, ll a2,ll k1,ll k2);


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>a1>>a2>>k1>>k2>>n;
	ns=n;
	if(k1>k2)
		func(a1,a2,k1,k2);
	else
		func(a2,a1,k2,k1);
	func2(a1,a2,k1,k2);

	cout<<smol<<" "<<maxim;
	return 0;
}

ll func(ll a1, ll a2,ll k1,ll k2)
{
	if(n/k2>a2)
	{
		maxim+=a2;
		n=n-k2*a2;
	}
	else
		maxim+=n/k2;
	maxim+=n/k1;
	return 0;
}

ll func2(ll a1, ll a2,ll k1,ll k2)
{
	ns-=a1*(k1-1);
	ns-=a2*(k2-1);
	if(n>0)
		smol=ns;
	
	return 0;
}
