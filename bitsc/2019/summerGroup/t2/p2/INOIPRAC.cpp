#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n, startime, maxi;
vector<pair<int,int>> times;

int sor(pair<int, int>f,pair<int, int>s );

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int t1, t2, t3;
		cin>> t1>> t2>> t3;
		times.push_back(pair<int, int>(t1, t2+t3));
	}
	sort(times.begin(),times.end(),sor);
	int time=0;
	for (auto iter = times.begin(); iter != times.end(); ++iter)
	{
		time=startime+iter->first+iter->second;
		startime+=iter->first;
		if (maxi<time)
			maxi=time;
	}
	cout<< maxi;

	return 0;
}

int sor(pair<int, int>f,pair<int, int>s )
{
	return f.second>s.second;
}
