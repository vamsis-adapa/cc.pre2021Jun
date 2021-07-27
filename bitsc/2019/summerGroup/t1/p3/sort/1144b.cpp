#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,e=0,o=0,sum=0;
long long int arr[2005],arre[2005];

int main(int argc, char const *argv[])
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >>temp;
		if(temp%2!=0)
		{
			arr[o]=temp;
			o++;
		}
		else 
		{
			arre[e]=temp;
			e++;
		}
	}
	int next=1;
	sort(arr, arr+o);
	sort(arre, arre+e);
	if(o==e||o==e+1||e==o+1)
	{
		cout << sum;
	}
	else if(o>e)
	{
		for (int i = 0; i < o-e-1; ++i)
			sum+=arr[i];
		cout <<sum;
	}
	else
	{
		for (int i = 0; i < e-o-1; ++i)
			sum +=arre[i];
		cout <<sum;
	}
	return 0;
}