#include <bits/stdc++.h>

using namespace std;

int n, l,r;

int main(int argc, char const *argv[])
{
	cin >> n>> l >> r;

	//case 1
	int ans=0;
	int ones =n-l+1;
	ans+=ones;
	int factor=2;
	for (int i = 0; i < n-ones; ++i)
	{
		ans+=factor;
		factor*=2;
	}
	cout << ans<<" ";

	factor=1;
	ans=0;
	for (int i = 0; i < n; ++i)
	{
		ans+=factor;
		if(i<r-1)
			factor*=2;
	}
	cout << ans;
	return 0;
}