#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
string s;
ll arr[105];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> s;	
	cin >>n;
	ll count=0;
	int i=1;
	for(auto iter=s.begin(); iter!=s.end();iter++)
	{
		arr[i]=arr[i-1];
		if (*iter=='a')
		{
			count++;
			arr[i]++;
		}
		i++;
	}
	ll comp=n/s.length();
	ll total=comp*count;
	ll rem =n%s.length();
	total+=arr[rem];
	cout<< total;


	return 0;
}
