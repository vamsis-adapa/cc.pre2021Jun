#include <bits/stdc++.h>
using namespace std;

#define MAX 20 //
#define ll long long int

ll n, arr[MAX];
ll maxim;

void recur(int start, int end);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (int i = 1; i <= n; ++i)
		cin >> arr[i];
	recur (1,n);
	cout<< maxim;
	return 0;
}

void recur(int start, int end)
{
	if(start>end)
		return;
	for (int i = start; i < end; ++i)
	{
		if(arr[i]>arr[i+1])
		{
			recur(start,(start+end)/2);
			recur((start+end+1)/2,end);
			return;
		}
	}
	if(maxim<(end-start+1))
		maxim=end-start+1;
	return;
}
