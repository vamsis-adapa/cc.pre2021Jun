#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int k;
long long int arr[1005];

int fun(long long n)
{
	long long int cot =0;
	while(!(n%2))
	{
		n=n/2;
		cot++;
	}
	while(!(n%3))
	{
		n=n/3;
		cot=cot+2;
	}
	while(!(n%5))
	{
		n=n/5;
		cot=cot+3;
	}
	if (n==1)
		cout << cot<<"\n";
	else 
		cout << -1<<"\n";
	return 0;
}

int main(int argc, char const *argv[])
{
	cin >> k;
	for (int i = 0; i < k; ++i)
		cin>> arr[i];
	for (int i = 0; i < k; ++i)
		fun(arr[i]);
	return 0;
}