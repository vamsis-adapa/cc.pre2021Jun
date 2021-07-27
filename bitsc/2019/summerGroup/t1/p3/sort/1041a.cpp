#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int n, arr[10005];


int main(int argc, char const *argv[])
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	sort(arr, arr+n);
	int tot= arr[n-1]-arr[0];
	cout << tot-n+1;

	return 0;
}