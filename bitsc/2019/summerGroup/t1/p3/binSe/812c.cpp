#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 100005

long long int n,s,arr[MAX],b[MAX];

int main(int argc, char const *argv[])
{
	cin >> n >> s;
	for (int i = 1; i <= n; ++i)
		cin >> arr[i];
	long long int sum=0, k=0, left=1, right=n,ans=0, ansk=0;
	while(left<=right&&sum!=s)
	{
		sum=0;
		k=(left +right)/2;
		for (int i = 1; i <= n; ++i)
			b[i]=arr[i]+k*i;
		sort(b+1,b+n+1);
		for (int i = 1; i <= k; ++i)
			sum+=b[i];
		if(sum>s)
			right=k-1;
		else
		{
			left =k+1;
			ans=sum;
			ansk=k;
		}
	}
	cout << ansk <<" "<< ans;


	return 0;
}