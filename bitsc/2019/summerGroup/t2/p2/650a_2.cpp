#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n,sum;
map<pair<ll ,ll> ,ll>locations;
map<ll,ll>locx;
map<ll,ll>locy;

ll  calPairs(ll n);

int main()
{
	cin >> n;
	auto checx=locx.begin();
	auto checy=locy.begin();
	auto check=locations.begin();
	for (int i = 0; i < n; ++i)
	{
		ll t1, t2;
		cin >> t1>> t2;
		check=locations.find(make_pair(t1,t2));
		if(check==locations.end())
			locations.insert(make_pair(make_pair(t1,t2),1));
		else
			check->second++;
		checx=locx.find(t1);
		if(checx==locx.end())
			locx.insert(make_pair(t1, 1));
		else
			checx->second++;
		checy=locy.find(t2);
		if(checy==locy.end())
			locy.insert(make_pair(t2,1));
		else
			checy->second++;
	}

	for(checx=locx.begin(); checx!=locx.end(); checx++)
		sum+=calPairs(checx->second);
	for(checy=locy.begin(); checy!=locy.end(); checy++)
		sum+=calPairs(checy->second);
	for(check=locations.begin(); check!=locations.end(); check++)
		sum-=calPairs(check->second);
	cout<< sum;
		
	return 0;
}


ll  calPairs(ll n)
{
	return (n*(n-1))/2;
}
