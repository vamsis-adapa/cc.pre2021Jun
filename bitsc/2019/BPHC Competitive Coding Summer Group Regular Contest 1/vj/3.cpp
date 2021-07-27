#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,k, arr[1000000], mint, minc;

int main(int argc, char const *argv[])
{
	int sum=0, start;
	cin >> n >>k;
	for (int i = 0; i < k; ++i)
	{
		cin >> arr[i];
		sum+= arr[i];
	}
	start =0;
	mint=sum;
	minc= 0;
	for (int i = k; i < n; ++i)
	{
		cin >>arr[i];
		sum=sum+arr[i]-arr[start];
		start=start+1;
		if(mint >sum)
		{
			mint=sum;
			minc=start;
		}
	}
	cout << minc+1;
	return 0;
}