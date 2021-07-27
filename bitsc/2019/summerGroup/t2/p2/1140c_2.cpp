#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n,k,maxim,counter;
std::map<ll,multiset<ll>> num ;

int main()
{
	cin>>n>>k;
	auto finder=num.begin();
	for (int i = 0; i < n; ++i)
	{
		ll temp, te2;
		cin >>temp>>te2;
		finder=num.find(te2);
		if(finder==num.end())
		{
			multiset<ll> g;
			g.insert(temp);
			num.insert(make_pair(te2,g));
		}
		else
			finder->second.insert(temp);
	}
	auto iter1=num.rbegin();
	ll sum=0;
	multiset<ll> sums;
	auto iter2= iter1->second.rbegin();
	while(counter<k)
	{
		for(iter2= iter1->second.rbegin();(iter2!=iter1->second.rend())&&counter<k;iter2++)
		{
			sum+=*iter2;
			counter++;
			sums.insert(*iter2);
		}
		ll tot= sum*(iter1->first);
		if(maxim<tot)
			maxim=tot;
		if(iter2==iter1->second.rend())
			{iter1++;iter2=iter1->second.rbegin();}
	}

	ll tot= 0;
	int firstime=0;
	while(counter<n)
	{
		if(firstime!=0)
			iter2=iter1->second.rbegin();
		firstime++;
		while(iter2!=iter1->second.rend())
		{
			auto ver= sums.begin();
			counter++;
			if(*iter2>*ver)
			{
				sum-=*ver;
				sum+=*iter2;
				sums.erase(ver);
				sums.insert(*iter2);
				tot=sum*(iter1->first);
				if(maxim<tot)
					maxim=tot;
			}
			iter2++;	
		}
		iter1++;
	}
	cout << maxim;
	
	return 0;
}
