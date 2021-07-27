#include <bits/stdc++.h>
using namespace std;

#define MAX 15 //
#define ll long long int

ll n;
string s;

ll arr[10000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >>n;
	cin >> s;
	for (auto iter= s.begin(); iter != s.end(); ++iter)
	{
		arr[*iter+0]++;
	}
	ll num0= arr['z'+0];
	ll num1=arr['n'+0];
	for (int i = 0; i < num1; ++i)
	{
		cout<< 1<< " ";
	}
	for (int i = 0; i < num0; ++i)
	{
		cout<< 0<<" ";
	}
	
	return 0;
}
