#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,m,arr[55],mint=300000;

int main(int argc, char const *argv[])
{
	cin >>n>>m;
	for (int i = 0; i < m; ++i)
		cin >> arr[i];
	sort(arr,arr+m);
	for (int i = 0; i <= m-n; ++i)
		if(arr[i+n-1]-arr[i]<mint)
			mint=arr[i+n-1]-arr[i];
	cout << mint;
	return 0;
}