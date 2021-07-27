#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define max 100005

long long int n;
long long int d, m[max], s[max];
pair<long long int, long long int> arr[max];

bool grea(pair<long long int, long long int>r, pair<long long int, long long int> x);

int main(int argc, char const *argv[])
{
	cin >> n>>d ;
	for (long long int i = 0; i < n; ++i)
	{
		cin >>m[i] >> s[i];
		arr[i].first=m[i];
		arr[i].second=s[i];
	}
	sort(arr,arr+n,grea);
	long long int left=0 , right=0;
	long long int count=0,ans=0;
	while(right<n)
	{
		if(arr[right].first-arr[left].first<d)
		{
			count+=arr[right].second;
			right++;
		}
		else
		{
			count-=arr[left].second;
			left++;
		}
		if(ans<count)
			ans=count;
	}
	cout << ans;
	return 0;
}


bool grea(pair<long long int, long long int>r, pair<long long int, long long int> x)
{
	return (r.first< x.first);
}