#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define max 100005 

int n;
long long int t[max], l[max],r[max];

int main(int argc, char const *argv[])
{
	cin >> n;
	t[0]=0;
	l[0]=0;
	r[n+1]=0;
	for (int i = 1; i <= n; ++i)
	{
		cin >>t[i];
		l[i]=t[i-1]+l[i-1];
	}
	for (int i = n; i >0; --i)
		r[i]=r[i+1]+t[i+1];

	int left=1, right =n, mid;
	int ansl=0,ansr=0;
	int count=n/2+2;
	while(left<=right&&count>0)
	{
		mid=(left +right)/2;
		if(l[mid]==r[mid])
		{
			ansl=mid;
			ansr=n-mid;
			cout <<ansl <<" "<< ansr;
			return 0;
		}
		else if(l[mid]>r[mid])
		{
			ansl=mid-1;
			ansr=n-ansl;
			right=mid;
		}
		else
		{
			ansl=mid;
			ansr=n-ansl;
			left=mid;
		}
		count --;
	}
	cout<<ansl<<" "<<ansr;	
	return 0;
}