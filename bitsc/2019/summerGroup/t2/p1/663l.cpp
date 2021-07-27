#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n;

ll pw(ll a, ll b);

int main()
{
	cin >> n;
	n=(n/10000)*10000+((n/1000)%10)+((n/100)%10)*1000+((n/10)%10)*10+((n%10)*100);
	ll ns =pw(n,5);
	printf("%05d", ns);
	return 0;
}

ll pw(ll a, ll b)
{
	if(b==0)
		return 1;
	ll ret =pw(a, b/2)%100000;
	if(b%2==0)
		return (ret*ret)%100000;
	else return (ret*ret*a)%100000;
}
