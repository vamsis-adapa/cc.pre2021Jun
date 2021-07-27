#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //100005
#define ll long long int

ll n,arr[MAX],maxim,temp,val,pos;
stack<pair<ll,ll>>loc;

void func(ll n);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	while(n)
	{
		func(n);
		cin>> n;
	}
	return 0;
}

void func(ll n)
{
	maxim=0;
	for (ll i = 0; i < n; ++i)
	{
		cin>>temp;
		if(loc.empty()||loc.top().second<=temp)
			loc.push(make_pair(i,temp));
		else
		{
			while(!loc.empty()&&loc.top().second>temp)
			{
				val=(i-loc.top().first)*loc.top().second;
				if(maxim<val)
					maxim=val;
				pos=(loc.top().first);
				loc.pop();
			}
			loc.push(make_pair(pos,temp));
		}
	}
	while(!loc.empty())
	{
		val=(n-loc.top().first)*loc.top().second;
		if(maxim<val)
			maxim=val;
		pos=(loc.top().first);
		loc.pop();
	}
	cout <<maxim<<endl;
}
