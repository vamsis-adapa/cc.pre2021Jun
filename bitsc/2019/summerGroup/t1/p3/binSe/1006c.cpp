#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

long long int n,d[MAX],c1[MAX],c2[MAX];

long long int bin(long long int check,long long int i);

int main()
{
	cin >> n;
	c1[0]=0;
	c2[n+1]=0;
	for (long long int i = 1; i <= n; ++i)
		cin >> d[i];
	for (long long int i = 1; i <= n; ++i)
	{
		c1[i]=c1[i-1]+d[i];
		c2[n-i+1]=c2[n-i+2]+d[n-i+1];
	}
	long long int ans=0;
	long long int i=1;
	while(i<n&&c1[i]<=c2[i])
	{
		long long int temp=bin(c1[i],i);
		if(temp>ans)
			ans=temp;
		i++;
	}
	cout << ans;
	return 0;
}

long long int bin(long long int check,long long int i)
{	long long int right =n;
	i=i+1;
	while(i<=right)
	{
		long long int mid= (i+right)/2;
		if(check==c2[mid])
			return check;
		else if(check<c2[mid])
			i= mid+1;
		else
			right=mid-1;
	}
	return 0;
}