#include <bits/stdc++.h>
using namespace std;

#define MAX 1000005 //
#define ll long long int

ll n,t;
ll arr[MAX];

void calc(int n);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		calc(n);
	}
	return 0;
}

void calc(int n)
{
		for (ll i = 0; i < n; ++i)
		cin>> arr[i];
	ll i,check=0;
	for ( i = n-1; i > 0; --i)
	{
		if(arr[i]>arr[i-1])
		{
			check=1;
			ll max=arr[i],maxy=i;
			for (int j = i; j < n; ++j)
			{
				if(arr[j]<max&&arr[j]>arr[i-1])
					max=arr[j],maxy=j;
			}
			ll temp= arr[i-1];
			arr[i-1]=arr[maxy];
			arr[maxy]=temp;
			break;
		}
	}
	if(check)
	{
		sort(arr+i,arr+n);
		for (int i = 0; i < n; ++i)
			cout<<arr[i];
		cout<<endl;
	}
	else 
		cout<<-1<<endl;
}
