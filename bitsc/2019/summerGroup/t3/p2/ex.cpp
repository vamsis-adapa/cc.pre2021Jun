#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int



ll n,k, arr[MAX],coins[MAX];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >>n>>k;
	for (int i = 0; i <=k; ++i)
		arr[i]=INT_MAX;
	for (int i = 0; i < n; ++i)
		cin>>coins[i];
	int top=0;
	arr[top]=0;
	top++;
	sort(coins, coins+n);

	while(top<=k)
	{
		for (int i = 0; i < n&&coins[i]<=top; ++i)
		{
			arr[top]=min(arr[top-coins[i]]+1,arr[top]);
		}
		top++;
	}
	if(arr[k]>=INT_MAX)
		cout << -1;
	else
		cout << arr[k];

	return 0;
}
