#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define max 200005

int n;
long long int a[max];

int main(int argc, char const *argv[])
{
	cin >>n;
	for (int i = 0; i < n; ++i)
		cin >>a[i];
	sort(a,a+n);
	int left=0,right=0, count =0, ans=0;

	while(right<n)
	{
		if(a[right]-a[left]<=5)
		{
			count++;
			right++;
		}
		else
		{
			count--;
			left++;
		}
		if(count>ans)
			ans=count;
	} 
	cout << ans;
	return 0;
}