#include <bits/stdc++.h>
using namespace std;

#define MAX 1005 //
#define ll long long int

ll n;
ll arr[MAX];
ll graph[MAX][MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < n; ++j)
		{
			cin >> graph[i][j];
		}
	}
	
	arr[0]=sqrt((graph[0][1]*graph[0][2])/graph[1][2]);

	for (int j = 1; j < n; ++j)
		arr[j]=graph[0][j]/arr[0];
	for (int i = 0; i < n; ++i)
		cout << arr[i]<<" ";
	return 0;
}
