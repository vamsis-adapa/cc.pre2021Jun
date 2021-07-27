#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 100005

long long int  n, arr[MAX];

int square(long long int k);
int isprime(long long int k);

int main(int argc, char const *argv[])
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==1)
			cout << "NO\n";
		else if ((!square(arr[i])))
			cout << "NO\n";
		else if(isprime(sqrtl(arr[i])))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	return 0;
}

int square(long long int k)
{
	long long int c= (long long int )sqrtl(k);
	if (c*c==k)
		return 1;
	else 
		return 0;
}

int isprime(long long int k)
{
	if(k==2)
		return 1;
	for (int i = 2; i <= sqrtl(k); ++i)
	{
		if(k%i==0)
			return 0;
	}
	return 1;
}