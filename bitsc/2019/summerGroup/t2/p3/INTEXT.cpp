#include <bits/stdc++.h>
using namespace std;

#define MAX 10000005 //
#define ll long long int

ll n,k,counter;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin>> temp;
		if(temp%k==0)
			counter++;
	}
	cout<< counter;

	return 0;
}
